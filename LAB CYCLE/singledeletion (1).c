#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct NODE
{
int data;
struct NODE *link;
}*header,*newnode,*firstnode,*ptr,*ptr1;
void main()
{
void create();
void traverse();
void deletefront();
void deleteend();
void deleteany();
int ch;
create();
traverse();
do
{
printf("\n Choices:\n");
printf("\n 1.deletion at front \n 2.deletion at end \n 3.deletion at any postion \n 4.exit \n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1 : deletefront();
         traverse();
         break;
case 2 : deleteend();
	 traverse();
	 break;
case 3 : deleteany();
	 traverse();
	 break;
case 4 : exit(0);
	 break;
default : printf("invalid choice");
	  break;
}}
while(ch!=4);
}
void create()
{
if ( header == NULL )
{
firstnode=malloc(sizeof(struct NODE));
printf("enter the data");
scanf("%d",&firstnode->data);
firstnode->link=NULL;
header=firstnode;
ptr=header;
}
while(1)
{
newnode=malloc(sizeof(struct NODE));
printf("enter the data");
scanf("%d",&newnode->data);
if ( newnode -> data == 0 )
{
break;
}
newnode->link=NULL;
ptr->link=newnode;
ptr=newnode;
}}
void traverse()
{
ptr=header;
if ( ptr == NULL )
{
printf("\n list is empty\n");
}
else
{
printf("\n The linked list is\n");
printf("\n Data          Address            Link\n");
while ( ptr != NULL )
{
printf("\n %d",ptr->data);
printf("\t %p",&ptr->data);
printf("\t %p",ptr->link);
ptr=ptr->link;
}}}
void deletefront()
{
printf("\n deletion at front\n");
ptr=header;
if ( ptr == NULL )
{
printf("\n list is empty");
}
else
{
ptr1=ptr->link;
header=ptr1;
free(ptr);
}}
void deleteend()
{
printf("\n deletion at end");
ptr=header;
if (ptr == NULL )
{
printf("\n list is empty");
}
else
{
while ( ptr->link != NULL )
{
ptr1=ptr;
ptr=ptr->link;
}
ptr1->link=NULL;
free(ptr);
}}
void deleteany()
{
int key;
printf("\n deletion at any position\n");
ptr=header;
printf("enter the data to be deleted");
scanf("%d",&key);
if ( ptr == NULL ) 
{
printf("list is empty");
}
else
{
while (( ptr -> data != key ) && ( ptr -> link != NULL ))
{
ptr1=ptr;
ptr=ptr->link;
}
ptr1->link=ptr->link;
free(ptr);
}
}

