#include<stdio.h>
#include<conio.h>
void main()
{
int n,c,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
c=n%10;
sum+=c;
n=n/10;
}
printf("%d",sum);
getch();
}