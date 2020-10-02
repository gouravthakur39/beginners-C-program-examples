#include<stdio.h>
#include<conio.h>

struct student
{
int rollno;
char name[20];
float per;
};
void main()
{
  struct student s1,s2;
  clrscr();
  printf("enter rolno,name & per\n");
  scanf("%d%s%f",&s1.rollno,s1.name,&s1.per);
  s2=s1;
  printf("student record.....\n");
  printf("rollno=%d\n name=%s\n  per=%f",s2.rollno,s2.name,s2.per);
  getch();
}