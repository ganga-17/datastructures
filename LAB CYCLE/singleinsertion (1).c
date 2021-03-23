#include<stdio.h>
#include<stdlib.h>
struct NODE
{
int data;
struct NODE *link;
}*header,*newnode,*firstnode,*ptr,*insertfnode,*insertenode,*insertnodeany;
void main()
{
void create();
void traverse();
void insertfront();
void insertend();
void insertany();
int ch;
create();
traverse();
do
{
printf("\n\n\t \tCHOICES \n");
printf("\n\t1.INSERTION AT FRONT\n\t2.INSERTION AT END\n\t3.INSERTION AT ANY POSITION\n\t4.EXIT\n");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:insertfront();
       traverse();
       break;
case 2:insertend();
       traverse();
       break;
case 3:insertany();
       traverse();
       break;
case 4:exit(0);
default:printf("invalid choice");
        break;
        }
        }while(ch!=4);
}
void create()
{
if(header == NULL)
{
firstnode=malloc(sizeof(struct NODE));
printf("\nenter data : ");
scanf("%d",&firstnode->data);
firstnode->link = NULL;
header=firstnode;
ptr=header;
}
while(1)
{
newnode=malloc(sizeof(struct NODE));
printf("\nenter data : ");
scanf("%d",&newnode->data);
if ( newnode -> data == 0)
{break;
}
newnode->link = NULL;
ptr->link=newnode;
ptr=newnode;
}
}
void traverse()
{
ptr=header;
printf("the linkedlist is\n");
printf("\n DATA \t ADDRESS\t LINK \n");
while(ptr != NULL)
{
printf("\n%d",ptr->data);
printf("\t%p",&ptr->data);
printf("\t%p",ptr->link);
ptr=ptr->link;
}
}
void insertfront()
{
int data;
insertfnode=(struct NODE*)malloc(sizeof(struct NODE));
printf("\n INSERTION AT FRONT\n");
printf("enter data : ");
scanf("%d",&data);
insertfnode->link=header;
insertfnode->data=data;
header=insertfnode;
}
void insertend()
{
int m;
insertenode=(struct NODE*)malloc(sizeof(struct NODE));
printf("\nINSERTION AT END\n");
printf("enter data : ");
scanf("%d",&m);
ptr=header;
while ( ptr -> link != NULL)
{
ptr=ptr->link;
}
ptr->link=insertenode;
insertenode->data=m;
insertenode->link = NULL;
}
void insertany()
{
int y,key;
insertnodeany=(struct NODE*)malloc(sizeof(struct NODE));
printf("\n INSERTION AT ANY POSITION\n");
if( insertnodeany == NULL )
{
printf("\n memeory overflow");
}
else
{
ptr=header;
printf("enter data and key : ");
scanf("%d%d",&y,&key);
while (( ptr -> data != key ) && ( ptr -> link != NULL ))
{
ptr=ptr->link;
}
if( ptr->link == NULL )
{
printf("\n key not found\n");
}
else
{
insertnodeany->link=ptr->link;
insertnodeany->data=y;
ptr->link=insertnodeany;
}
}
}

