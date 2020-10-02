//prog on sum of upper and lower triangles
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],s=0,i,j;
 clrscr();
 printf("\n enter elements in arr.");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\n elements in arr=\n");
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("\t%d",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<=i;j++)
  {
  s=s+a[i][j];
  }
 }
 printf("\n sum oflower tri=%d",s);
 getch();
}