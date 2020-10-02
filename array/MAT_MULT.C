//prog on multi of 2-matrices
#include<conio.h>
#include<stdio.h>
void main()
{
 int a[3][3],b[3][3],sum=0;
 int i,j,k;
 clrscr();
 printf("\n enter 1st matrix..");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
  printf("\n enter 2nd matrix");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("\n matrix1=\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("\t%d",a[i][j]);
  }
  printf("\n");
 }
 printf("\n matrix2=\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("\t%d",b[i][j]);
  }
  printf("\n");
 }

 printf("\n addition of matrices=\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   sum=0;
   //for(k=0;k<3;k++)
   {

     sum=sum+a[i][j]+b[i][j];
    // sum=sum+a[i][k]* b[k][j];
   }
   printf("\t%d",sum);
  }
  printf("\n");
  }
getch();
}