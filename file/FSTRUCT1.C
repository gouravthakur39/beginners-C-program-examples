#include<stdio.h>
#include<conio.h>

void main()
{
struct person
{
int empno;
char *name;
float salary;
}s;

char ch='y';
int cnt;
FILE *fp;
clrscr();

fp=fopen("d:\\xyz.txt","w");
while(ch=='y')
{
printf("Enter empno,name,salary of an employee\n");
scanf("%d%s%f",&s.empno,s.name,&s.salary);
fprintf(fp,"%d\n%s\n%f\n",s.empno,s.name,s.salary);
printf("\nAdd more y/n:");
scanf("\n%c",&ch);
}
fclose(fp);
fp=fopen("d:\\xyz.txt","r");
cnt=fscanf(fp,"%d%s%f",&s.empno,s.name,&s.salary);
while(1)
{
printf("\nempno=%d\nname=%s\nsalary=%f",s.empno,s.name,s.salary);
cnt=fscanf(fp,"%d%s%f",&s.empno,s.name,&s.salary);
if(cnt==eof())
break;
}
fclose(fp);
getch();
}


