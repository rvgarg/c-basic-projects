#include<stdio.h>
#include<conio.h>
void main()
{
int n,revn=0,c,temp;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
c=n%10;
revn=revn*10+c;
n=n/10;
}
printf("%d",revn);
if(temp==revn)
printf("number is a palindrome");
else
printf("number is not a palindrome");
}