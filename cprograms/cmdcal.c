#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
if(argc!=4)
{
printf("give 3 arguments");
exit(0);
}
else{
printf("arguments passed");
int c=0,a,b;
char ch;
a=(int) atoi(argv[1]);
b=(int) atoi(argv[2]);
//strcpy(ch,argv[3]);
switch(argv[3][0])
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
}
}
