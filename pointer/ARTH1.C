//prog on arithmatic operation using pointer//
#include<stdio.h>
#include<conio.h>

void main()
{
 int *p,*q,*r,*z,x=20,y=10;
 clrscr();
 p=&x;
 q=&y;
 *r=*p + *q;           //  add=*ptr1+*ptr2
 *z=*p / *q;
 printf("\n addition=%d",*r);
 printf("\n div=%d",*z);
 printf("\n address of r %u",&r);
 printf("\n address of z %u",&z);
 getch();
}

/*
void main()
{
 int i=10,j=20,*p,*r,*x;
 clrscr();
 p=&i;
 r=&j;
 printf("\n add of i=%u",p);
 printf("\n value of i=%d",*p);
 printf("\n add of pointer p=%u",&p);
 printf("\n add of j=%u",r);
 printf("\n value of j=%d",*r);
 (*x)=*p * *r;
 printf("\n mult=%d",*x);
  (*p)++;                             //incrementing value using pointer...
 printf("\n new value of ptr p=%d",*p);

 getch();
} */
