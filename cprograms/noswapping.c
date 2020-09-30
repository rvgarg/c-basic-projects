#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);

a=a*b;
b=a/b;
a=a/b;

 printf("after swapping a=%d b=%d \n", a,b);
 
 getch();
}
