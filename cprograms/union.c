#include<stdio.h>
union student
{
int rollno;
char name[20];
float gp;
};
void main()
{
union student stu;
printf("enter name of the student");
scanf(" %s",&stu.name);
printf("enter rollno of the student");
scanf("%d",&stu.rollno);
printf("enter grade point of the student");
scanf("%f",&stu.gp);
printf("entered details are \nname %s \nrollno %d\ngrade point %f",stu.name,stu.rollno,stu.gp);
}
