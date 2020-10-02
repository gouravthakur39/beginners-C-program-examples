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
struct employee e;
};

struct details
{
  char bg[3];
  int age;
  struct person p;
};

void main()
{
struct person p;
struct details d;

clrscr();

printf("Enter the name,add,empno,salary:\n");
scanf("%s%s%d%d",p.name,p.add,&p.e.empno,&p.e.salary);

printf("Displaying employee record\n");
printf("name=%s\nadd=%s\nempno=%d\nsalary=%d\n",p.name,p.add,p.e.empno,p.e.salary);

printf("\nEnter Details bg,age,name,add:");
scanf("\n%s%d%s%s",&d.bg,&d.age,d.p.name,d.p.add);

printf("name=%s,add=%s,age=%d,bg=%s",d.p.name,d.p.add,d.age,d.bg);
getch();
}


