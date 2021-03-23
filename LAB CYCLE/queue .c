#include<stdio.h>
#include<stdlib.h>
void main()
{
int q[10],ch,i,size,front=0,rear=0,item;
printf("enter the size of the array : ");
scanf("%d",&size);
do
{
printf("\n CHOICES :\n");
printf("\n 1.ENQUEUE \n 2.DEQUEUE \n 3.EXIT \n");
printf("ENTER YOUR CHOICE : ");
scanf("%d",&ch);
switch(ch)
{
case 1 : if(rear==size)
          {
          printf("Queue is full and overloading");
          }
          else
          {
          printf("\n Enter the element : ");
          scanf("%d",&item);
          if((front == 0) && (rear == 0))
          {
          front=1;
          }
          rear++;
          q[rear]=item;
          }
          break;
case 2 : if(front == 0)
         {
         printf("\n queue is underflowing");
         }
         else
         {
         item=q[front];
         q[front]='\0';
         printf("deleted element:%d",item);
         if(front == rear)
         {
         front=rear=-1;
         }
         front++;
         }
         break;
case 3 : exit(0);
         break;
default : printf("\n wrong choice");
          break;
}
if(front == 0)
{
printf("\n queue is empty");
}
else
{
printf("\n queue is :\n");
for(i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
}
while(ch != 3);
}


