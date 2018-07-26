#include<stdio.h>
#include<conio.h>
void print(int n);
void main()
{
int n;
printf("enter a number");
scanf("%d",&n);
print(n);
getch();
}
void print(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}
}