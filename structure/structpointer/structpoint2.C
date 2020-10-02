#include<stdio.h>
#include<conio.h>
struct employee
{
int empno;
char name[20];
int salary;
};

void display(struct employee *e);
void main()
{
 struct employee e1[2];
 int i;
 clrscr();
 for(i=0;i<2;i++)
 {
 printf("enter empno,name,salary\n");
 scanf("%d%s%d",&e1[i].empno,e1[i].name,&e1[i].salary);
 }
 display(e1);
 getch();
 }

 void display(struct employee *e)
 {
 int i;
 for(i=0;i<2;i++)
 printf("%d\n%s\n%d\n",e[i].empno,e[i].name,e[i].salary);
 }

