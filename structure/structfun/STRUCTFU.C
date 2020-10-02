#include<stdio.h>
#include<conio.h>

struct student
{
char *name;
int sum;
float per;
};
void display(char *n, int sum,float per);

void main()
{
 struct student s;
 int m1,m2,m3;
 int sum=0;
 float per;
 clrscr();

 printf("Enter student's name,marks for 3 subjects:\n");
 scanf("%s%d%d%d",s.name,&m1,&m2,&m3);
 sum=m1+m2+m3;
 per=sum/3;
 display(s.name,sum,per);
 getch();
 }

void display(char *n,int sum,float per)
{
if(per>=75)
printf("%s scored a distinction.\n",n);
else if(per>60 && per<75)
printf("%s scored a first class.\n",n);
else if(per>50 && per<60)
printf("%s scored a 2nd class.\n",n);
else if(per>40 && per<50)
printf("%s is passed.\n",n);
else
printf("%s fails.",n);
}

