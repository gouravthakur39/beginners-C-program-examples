#include<stdio.h>
#include<conio.h>
struct employee
{
int empno;
int salary;
};

struct person
{
char name[20],add[30];
struct employee e1;
};

void main()
{
struct person p[2];
int i;
clrscr();
for(i=0;i<2;i++)
{
printf("enter the name /add/empno/salary\n");
scanf("%s%s%d%d",p[i].name,p[i].add,&p[i].e1.empno,&p[i].e1.salary);
}
for(i=0;i<2;i++)
{
printf("displaying employee record\n");
printf("name=%s\nadd=%s\nempno=%d\nsalary=%d\n",p[i].name,p[i].add,p[i].e1.empno,p[i].e1.salary);
}
getch();
}