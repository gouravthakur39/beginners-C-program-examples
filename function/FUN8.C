//prog to pass an array to a function..
#include<stdio.h>
#include<conio.h>

void array(int []);
void main()
{
 int a[3],b[3];
 clrscr();
 array(a);
 array(b);
 getch();
}

void array(int x[3])
{
 int i;
 printf("\n enter elements in array..");
 for(i=0;i<3;i++)
 {
  scanf("%d",&x[i]);
 }
  printf("\n elements in array..\n");
 for(i=0;i<3;i++)
 {
  printf("%d\t",x[i]);
 }
}


