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
struct person p;
clrscr();
printf("enter the name /add/empno/salary\n");
scanf("%s%s%d%d",p.name,p.add,&p.e1.empno,&p.e1.salary);
printf("displaying employee record\n");
printf("name=%s\nadd=%s\nempno=%d\nsalary=%d\n",p.name,p.add,p.e1.empno,p.e1.salary);
getch();
}


