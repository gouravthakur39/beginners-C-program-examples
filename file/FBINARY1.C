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
FILE *fp;
clrscr();
fp=fopen("c:\\xyz.txt","wb");
while(ch=='y')
{
printf("enter empno,name,salary of an employee\n");
scanf("%d%s%f",&s.empno,s.name,&s.salary);
fwrite(&s,sizeof(s),1,fp);
printf("add more y/n");
scanf("\n%c",&ch);
}
fclose(fp);
printf("\n Reading data from a file:");
fp=fopen("c:\\xyz.txt","rb");
while(fread(&s,sizeof(s),1,fp)!=0)
{
printf("\nempno=%d\nname=%s\nsalary=%f",s.empno,s.name,s.salary);
}
fclose(fp);
getch();
}


