#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void main()
{
int ch;
do
{
printf(" \n 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.EXIT \n");
printf("enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1 : enqueue();
         display();
         break;
case 2 : dequeue();
         display();
         break;
case 3 : display();
         break;
default : printf("Wrong choice\n");
          break;
}
}
while(ch != 4);
}
struct NODE
{
int data;
struct NODE *link;
}n;
struct NODE *front=NULL;
struct NODE *rear=NULL;
void enqueue()
{
int item;
struct NODE *temp;
printf("enter the item : ");
scanf("%d",&item);
temp=malloc(sizeof(struct NODE));
temp -> data = item;
temp -> link = NULL;
if(rear == NULL)
{
front = temp;
rear = temp;
}
else
{
rear -> link =temp;
rear = temp;
}
}
void dequeue()
{
int item;
if(front == NULL)
{
printf("Queue is empty\n");
}
else
{
item=front->data;
printf("The element deleted : %d\n",item);
}
if(front == rear)
{
front = NULL;
rear = NULL;
}
else
{
front=front->link;
}
}
void display()
{
struct NODE *ptr;
if(front == NULL)
{
printf("Queue is empty \n");
}
else
{
ptr = front;
printf("The elements of the queue are : \n");
printf("\n");
while(ptr != NULL)
{
printf("%d\n",ptr -> data);
ptr = ptr -> link;
}
}
}

