#include<stdio.h>
#include<conio.h>
void sumproduct(int,int,int *,int *); //fun proto
int main()
{
  int a=10,b=20,sum=0,product=0;
  clrscr();
  sumproduct(a,b,&sum,&product);
  printf("sum is=%d",sum);
  printf("product is=%d",product);
  getch();
  return 0;
}


void sumproduct(int a,int b,int *s,int *p)
{

  *s=a+b;

  *p=a*b;

}