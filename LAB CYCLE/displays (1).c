#include<stdio.h>
#define N 10
int main()
{
int a[N],i;
printf("enter the elements of the array");
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
printf("The elements of the array are:");
for(i=0;i<N;i++)
{
printf("%d\n",a[i]);
}
return 0;
}