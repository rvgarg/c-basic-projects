#include<stdio.h>
#include<conio.h>
void main()
{
int n,revn=0,c;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
c=n%10;
revn=revn*10+c;
n=n/10;
}
printf("%d",revn);
}