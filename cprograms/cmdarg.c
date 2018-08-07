#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
if(argc==3){
printf("arguments passed");
int c=0,a,b;
/*a=(int) argv[1];
b=(int) argv[2];
c=a+b;*/
c=atoi(argv[1])+atoi(argv[2]);
printf("%d",c);}
else if(argc>3)
printf("too many arguments");
else
printf("give atleast 2 argument");
}
