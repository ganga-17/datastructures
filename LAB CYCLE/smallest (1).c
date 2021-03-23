#include<stdio.h>
int main()
{
int a[10],i,n;
printf("enter the limit of the array:");
scanf("%d",&n);
printf("enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[0]>a[i])
{
a[0]=a[i];
}
}
printf("Smallest element is %d",a[0]);
return 0;
}