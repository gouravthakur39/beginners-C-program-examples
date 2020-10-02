#include<stdio.h>
#include<conio.h>

struct person
{
char *name;
int age;
};
void display(char *n, int a);

void main()
{
 struct person p;
 clrscr();
 printf("enter name & age\n");
 scanf("%s%d",p.name,&p.age);
 display(p.name,p.age);
 getch();
 }

void display(char *n, int a)
{
if(a>=60)
printf("%s is a senior citizen\n",n);
else if(a<60 && a >=30)
printf("%s is a middle age person\n",n);
else if(a<30 && a>=15)
printf("%s is a younger person\n",n);
else
printf("%s is a teenager\n",n);
}

