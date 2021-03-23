#include<stdio.h>
int main()
{
int a[10][10],i,j,r1,c1;
printf("enter the order of the matrix:");
scanf("%d%d",&r1,&c1);
printf("enter the elements of the matrix:");
for(i=0;i,r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Transpose of the matrix is:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",a[j][i]);
}
}
return 0;
}
