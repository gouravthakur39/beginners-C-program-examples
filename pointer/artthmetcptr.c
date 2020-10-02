// working with pointer arithmetics

#include<stdio.h>
#include<conio.h>

/*  void main()
   {
     int a,b,*p,*q;
     clrscr();
     p=&a;
     q=&b;
     printf("enter values for a,b");
     scanf("%d%d",&a,&b);
     printf("\n addition is :%d",a+b);
     printf("\n addition is :%d",*p + *q);
     getch();
  }   */


 void main()

  {
     float a,b,*p1,*p2;
     float z;
     clrscr();
     p1=&a,p2=&b;
     a=100,b=21.8;
     printf("\n value of a:%f",a);
     a= *p1*10;
     printf(" \n new value of a:%f",a);
     z=*p1  / *p2;
     printf("\n value of z:%f",z);
     z=*p1-*p2;
     printf("\n value of z:%f",z);
     getch();
  }

