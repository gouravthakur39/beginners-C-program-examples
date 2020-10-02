#include<stdio.h>
struct student
{
int rollno;
char name[20];
int marks[3];

//int total;
float per;
};
void main()
{
 struct student s[5];
 int i,j,sum;
 for(i=0;i<5;i++)
 {
  printf("enter rollno & name\n");
  scanf("%d%s",&s[i].rollno,s[i].name);
  printf("enter marks for three subjects\n");
  sum=0;
  for(j=0;j<3;j++)
  {
  scanf("%d",&s[i].marks[j]);
  sum=sum+s[i].marks[j];
  }
  //s[i].total=sum;
  s[i].per=sum/3;
  }
  printf("displaying student data\n");
 for(i=0;i<5;i++)
 {
  printf("\nrollno=%d\nname=%s",s[i].rollno,s[i].name);
  printf("\nmarks in three subjects: ");
  for(j=0;j<3;j++)
  printf(" %d",s[i].marks[j]);
//  printf("\ntotal=%d",s[i].sum);
  printf("\nper=%f",s[i].per);
  }
getch();
}