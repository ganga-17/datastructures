#include<stdio.h>
int main()
{
int a[50],sum=0,i,n,avg;
printf("enter the number of elements of the array:");
scanf("%d",&n);
printf("enter the elements of the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=sum/n;
printf("Average is:%d",avg);
return 0;
}