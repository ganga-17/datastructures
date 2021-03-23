#include<stdio.h>
int main()
{
int a[20],i,j,temp,n;
printf("enter the limit of the array:");
scanf("%d",&n);
printf("enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Elements in ascending order:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}