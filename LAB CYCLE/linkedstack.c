#include<stdio.h>
#include<stdlib.h>
struct NODE
{
int data;
struct NODE *link;
}*header,*top,*ptr;
int c=0;
void main()
{
void push();
void pop();
void status();
void display();
int ch;
do
{
printf("\n CHOICES \n");
printf("\n 1.PUSH \n 2.POP \n 3.STATUS \n 4.EXIT \n");
printf("\n Enter your choice :");
scanf("%d",&ch);
switch(ch)
{
case 1 : push();
         display();
         break;
case 2 : pop();
         display();
         break;
case 3 : status();
         display();
         break;
case 4 : exit(0);
         break;
default : printf("wrong choice\n");
          break;
}
}
while(ch!=4);
}
void push()
{
struct NODE *newnode;
newnode = malloc(sizeof(struct NODE));
printf("enter data : ");
scanf("%d",&newnode -> data);
newnode->link=top;
top=newnode;
header=top;
c=c+1;
}
void pop()
{
if(top == NULL)
{
printf("stack underflow\n");
}
else
{
ptr = top->link;
header ->link=ptr;
printf("\n popped element : %d",top->data);
free(top);
top=ptr;
}
c=c+1;
}
void status()
{
}
void display()
{
if(top ==NULL)
{
printf("stack is empty");
}
else
{
ptr=top;
printf("\n stack is :\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->link;
}
}
}