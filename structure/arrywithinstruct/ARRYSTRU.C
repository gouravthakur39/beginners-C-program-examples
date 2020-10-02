//array with in stuctures
#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
int marks[3];     //array with in stru
int total;
float per;
};
void main()
{
 struct student s;
 int j,sum;
 clrscr();
  printf("\nEnter rollno & name\n");
  scanf("%d%s",&s.rollno,&s.name);
  printf("\nEnter marks for three subjects\n");
  sum=0;
  for(j=0;j<3;j++)
  {
  scanf("%d",&s.marks[j]);
  sum=sum+s.marks[j];
  }
  s.total=sum;
  s.per=sum/3;
  printf("displaying student data\n");
  printf("\n---------------------------------------------");
  printf("\nrollno=%d\nname=%s",s.rollno,s.name);
  printf("\nmarks in three subjects: ");
  for(j=0;j<3;j++)
  {
    printf(" %d",s.marks[j]);
  }
    printf("\ntotal=%d",s.total);
    printf("\nper=%f",s.per);
  if(s.per>=75&&s.per<=100)
    printf("\ndistinction");
  else if(s.per<=75&&s.per>=60)
    printf("\n1st class");
  else if(s.per<=60 &&s.per>=40)
    printf("\n2nd class");
  else
  printf("\nfail");
  getch();
}