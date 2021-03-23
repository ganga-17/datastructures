#include<stdio.h>
#include<stdlib.h>
struct NODE
{
int data;
struct NODE * Rlink;
struct NODE * Llink;
}*header,*newnode,*firstnode,*ptr,*ptr1,*ptr2,*insertfnode,*insertenode,*insertnodeany;
void main()
{
int ch;
void create();
void traverse();
void insertfront();
void insertend();
void insertany();
void deletefront();
void deleteend();
void deleteany();
create();
traverse();
do
{
printf("\n \n\t\t CHOICES \n");
printf("\n\t1.INSERTION AT FRONT\n\t2.INSERTION AT ANY POSITION\n\t3.INSERTION AT END\n\t4.DELETION AT FRONT\n\t5.DELETION AT ANY POSITION\n\t6.DELETION AT END\n\t7.EXIT\n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:insertfront();
       traverse();
       break;
case 2:insertany();
       traverse();
       break;
case 3:insertend();
       traverse();
       break;
case 4:deletefront();
       traverse();
       break;
case 5:deleteany();
       traverse();
       break;
case 6:deleteend();
       traverse();
       break;
case 7:exit(0);
       break;
default:printf("Invalid choice");
        break;
}
}
while(ch!=7);
}
void create()
{
if ( header == NULL)
{
ptr=header;
firstnode=malloc(sizeof(struct NODE));
printf("\n\t Enter data : ");
scanf("%d",&firstnode->data);
firstnode->Rlink=NULL;
header=firstnode;
firstnode->Llink=header;
ptr=firstnode;
}
while(1)
{
newnode=malloc(sizeof(struct NODE));
printf("\n\t Enter data : ");
scanf("%d",&newnode->data);
if ( newnode -> data == 0)
{
break;
}
newnode->Rlink=NULL;
ptr->Rlink=newnode;
newnode->Llink=ptr;
ptr=newnode;
}
}
void traverse()
{
ptr=header;
printf("\n\t THE LINKEDLIST IS \n");
printf("DATA\t   ADDRESS\t    LLINK\t    RLINK");
do
{
printf("\n%d\t",ptr->data);
printf("%p\t",&ptr->data);
printf("%p\t",ptr->Llink);
printf("%p\t",ptr->Rlink);
ptr=ptr->Rlink;
}
while(ptr != NULL);
}
void insertfront()
{
int data;
insertfnode=malloc(sizeof(struct NODE));
if ( insertfnode == NULL )
{
printf("\nmemory underflow");
}
else
{
printf("\n\t INSERTION AT FRONT\n");
printf("Enter data : ");
scanf("%d",&data);
ptr=header;
insertfnode->data=data;
insertfnode->Llink=NULL;
insertfnode->Rlink=ptr;
ptr->Llink=insertfnode;
header=insertfnode;
}
}
void insertend()
{
int m;
insertenode=malloc(sizeof(struct NODE));
if ( insertenode == NULL )
{
printf("Memory underflow\n");
}
else
{
printf("\n\t INSERTION AT END\n");
printf("Enter data : ");
scanf("%d",&m);
ptr=header;
while ( ptr ->Rlink != NULL )
ptr=ptr->Rlink;
ptr->Rlink=insertenode;
insertenode->data=m;
insertenode->Llink=ptr;
insertenode->Rlink=NULL;
}
}
void insertany()
{
int y,key;
insertnodeany=malloc(sizeof(struct NODE));
if ( insertnodeany == NULL )
{
printf("\n Memory underflow");
}
else
{
printf("\n\t INSERTION AT ANY POSITION\n");
ptr=header;
printf("Enter data and key : ");
scanf("%d%d",&y,&key);
while (( ptr -> data != key ) && ( ptr -> Rlink != NULL ))
ptr=ptr->Rlink;

if (ptr == NULL)
printf("\nkey not found");
else
{
ptr1=ptr->Rlink;
ptr->Rlink=insertnodeany;
insertnodeany->data=y;
insertnodeany->Llink=ptr;
insertnodeany->Rlink=ptr1;
ptr1->Llink=insertnodeany;
}
}
}
void deletefront()
{
ptr = header;
if ( ptr == NULL )
{
printf("List is empty ");
}
else
{
printf("\n\t DELETION AT FRONT \n");
ptr1=ptr->Rlink;
ptr1->Llink=NULL;
header=ptr1;
free(ptr);
}
}
void deleteend()
{
ptr=header;
if ( ptr == NULL )
printf("\n list is empty ");
else
{
printf("\n\t DELETION AT END \n");
while ( ptr -> Rlink != NULL )
ptr=ptr->Rlink;
ptr1=ptr->Llink;
ptr1->Rlink=NULL;
free(ptr);
}
}
void deleteany()
{
int key;
ptr=header;
if ( ptr == NULL )
{
printf("\n list is empty");
}
else
printf("\n\t DELETION AT ANY POSTION \n ");
printf("\n Enter data : ");
scanf("%d",&key);
while (( ptr -> data != key ) && ( ptr ->Rlink != NULL ))
ptr=ptr->Rlink;
if ( ptr == NULL )
printf("\n key not found ");
else
{
ptr1=ptr->Llink;
ptr2=ptr->Rlink;
ptr1->Rlink=ptr2;
ptr2->Llink=ptr1;
free(ptr);
}
}


