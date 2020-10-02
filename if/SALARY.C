/*salary and bonus*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int sal,bonus,a;
 clrscr();
 printf("\n enter salary");
 scanf("%d",&sal);
 if(sal>=5000&&sal<=10000)
 {
   bonus=800;
  a=sal+bonus;
  printf("total sal=%d",a);
  }
  else if(sal>=3000&&sal<5000)
  {
    bonus=500;
    a=sal+bonus;
  printf("total salary=%d",a);
  }
  else if(sal>=1500&&sal<3000)
  {
    bonus=300;
   a=sal+bonus;
  printf("total=%d",a);
  }
  else
  {
  printf("no bonus");
  }

getch();
  }
