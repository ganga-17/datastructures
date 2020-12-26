#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20];
int top=-1,n,ch,item,i;
printf("Enter the size of the array : ");
scanf("%d",&n);
do
{
printf("\n\t CHOICES : ");
printf("\n 1.PUSH \n 2.POP \n 3.EXIT \n");
printf("\n Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1: if(top >=n-1)
        {
        printf("stack overflow");
        }
        else
        {
        printf("enter the element :");
        scanf("%d",&item);
        top=top+1;
        a[top]=item;
        }
        break;
case 2 : if(top<0)
         {
         printf("stack underflow");
         }
         else
         {
         a[top]='\0';
         top=top-1;
         }
         break;
case 3 : exit(0);
         break;
default : printf("\n Invalid choice");
}
if(top < 0)
{
printf("\n stack is empty");
}
else
{
printf("\n stack is \n");
for(i=top;i>=0;i--)
{
printf("%d\n",a[i]);
}
}
}
while(ch!=3);
}
