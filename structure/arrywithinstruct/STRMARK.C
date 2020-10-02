#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
int marks[3];
int total;
float per;
};
void main()
{
 struct student s[2];
 int i,j,sum;
 clrscr();

 for(i=0;i<2;i++)
 {
  printf("\nEnter rollno & name\n");
  scanf("%d%s",&s[i].rollno,&s[i].name);
  printf("\nEnter marks for three subjects\n");
  sum=0;
  for(j=0;j<3;j++)
  {
  scanf("%d",&s[i].marks[j]);
  sum=sum+s[i].marks[j];
  }
  s[i].total=sum;
  s[i].per=sum/3;
  }
  printf("displaying student data\n");
 for(i=0;i<2;i++)
 {
  printf("\n---------------------------------------------");
  printf("\nrollno=%d\nname=%s",s[i].rollno,s[i].name);
  printf("\nmarks in three subjects: ");
  for(j=0;j<3;j++)
  printf(" %d",s[i].marks[j]);
  printf("\ntotal=%d",s[i].total);
  printf("\nper=%f",s[i].per);


  if(s[i].per>=75&&s[i].per<=100)
    printf("\ndistinction");
  else if(s[i].per<=75 && s[i].per>=60)
    printf("\n1st class");
  else if(s[i].per<=60 && s[i].per>=40)
    printf("\n2nd class");
  else
  printf("\nfail");
  }
getch();
}