//prog on incrementing a pointer
#include<stdio.h>
#include<conio.h>

/*
  int i=3,*x;
  float j=1.5,*y;
  char k='c',*z;
  printf("value of i=%d\n",i);
  printf("value of j=%f\n",j);
  printf("value of k=%c\n\n",k);
  x=&i;
  y=&j;
  z=&k;
  printf("original address of i=%u\n",x);
  printf("original address of j=%u\n",y);
  printf("original address of k=%u\n\n",z);
  x++;
  y++;
  z++;
  printf("new address of i=%u\n",x);
  printf("new address of j=%u\n",y);
  printf("new address of k=%u\n\n",z);
getch();
}



void main()
{
 int x=10,*p;
 clrscr();
 p=&x;
 printf("\n address of x  =%u",p);
 printf("\n value of x =%d",*p);
(*p)++;
printf("\n new value=%d",*p);
p++;                                              //p=p+(1*S.F.)S. F.=scale factor=2
printf("\n new add stored in p=%u",p); printf("\n new value at p=%d",*p);
 getch();
}



