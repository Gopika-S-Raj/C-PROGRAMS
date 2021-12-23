#include <stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void insert();
void delet();
void peek();
void display();
void main()
{

int opt;int val;
do
{
printf("Operations are:\n");
printf("1.insert\n2.delete\n3.peek\n4.display\n");
printf("Enter the operation to be performed");
int n;
scanf("%d",&n);
switch(n)
{
case 1:insert();break;
case 2:delet();break;
case 3:peek();break;
case 4:display();break;
default:printf("Invalid operation");
}printf("\nDo you want to continue?0/1");

scanf("%d",&opt);
}while(opt==1);
}
void insert()
{
int n;
printf("enter the element to insert");
scanf("%d",&n);
if(front==0&&rear==max-1)
{
printf("overflow");
}
else if(front==-1&&rear==-1)
{
front=rear=0;
queue[rear]=n;
printf("%d is the inserted element",n);
}
else
{
rear=rear+1;
queue[rear]=n;
printf("%d is the inserted element",n);
}
}
       void delet()
        {
        int d;
       
          
         d=queue[front];
          if(front==-1)
           {
            printf("under flow");
           }
          else if(front==rear)
           {
           d=queue[front];
           front=rear=-1;
          printf("deleted element is %d",d);
          }
         else if(front==max-1)
           {
           d=queue[front];
           front=0;
          printf("deleted element is %d",d);
           }
         else
         {
         d=queue[front];
         front=front+1;
         printf("deleted element is %d",d);

         }
}
 void peek()
{
int c;
c=queue[front];
if(front==-1)
{
printf("queue is empty");
}
else
{
printf("%d is the element in peek",c);
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
{
printf("queue is empty");
}
else if(front<rear)
{
for(i=front;i<=rear;i++)
 {
printf("%d\t",queue[i]);
}
}
else
{
for(i=front;i<max-1;i++)
{
printf("%d\t",queue[i]);

for(i=front;i<rear+1;i++)
{
printf("%d\t",queue[i]);
}
}
}
}       
           

          
          

