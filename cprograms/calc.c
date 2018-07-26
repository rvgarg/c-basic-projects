#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
char ch;
printf("enter operation");
scanf("%c",&ch);
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
switch(ch)
{
case '+':
c=a+b;
break;
case '-':
c=a-b;
break;
case '*':
c=a*b;
break;
case '/':
c=a/b;
break;
}
printf("%d",c);
getch();
}