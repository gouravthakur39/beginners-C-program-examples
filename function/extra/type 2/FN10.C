/*name of students and 5 subjets marks*/
#include<stdio.h>
#include<conio.h>
//void avg(int n);
void main()
{
int m[5];
char name[15];
int sum=0,i;
clrscr();
printf("enter name & 5 subjets marks");
scanf("%s",&name);
for(i=0;i<5;i++)
{
scanf("%d",&m[i]);
sum=sum+m[i];
}
printf("\n name=%s",name);
printf("\n marks of 5 subjets");
for(i=0;i<5;i++)
printf("\n %d\t",m[i]);
printf("\n sum=%d",sum);
avg(sum);
getch();
}
avg(int n)
{
float a;
a=n/5;
printf("\navg=%f",a);
}