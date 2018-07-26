#include<stdio.h>
#include<conio.h>
int add(int a,int b);
void main()
{
int a,b,c;
printf("enter 2 number");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("%d",c);
getch();
}
int add(int a,int b)
{
int c=0;
c=a+b;
return c;
}