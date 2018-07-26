#include<stdio.h>
#include<conio.h>
void main()
{
int a[6][6],b[6][6],sum[6][6],i,j,r,c;
printf("enter the no of rows you want");
scanf("%d",&r);
printf("enter the no of columns you want");
scanf("%d",&c);
printf("enter the elements of matrix 1");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("element %d%d",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of matrix 2");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("element %d%d",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",sum[i][j]);
}
printf("\n");
}
getch();
}