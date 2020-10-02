#include<stdio.h>
#include<conio.h>

void main()
{
int m1[3][3],m2[3][3],m3[3][3],i,j;
clrscr();
printf("enter the first matrix\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	scanf("%d", &m1[i][j]);
}
printf("displaying the  matrix m1\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",m1[i][j]);
}
printf("\n");
}

printf("enter second matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&m2[i][j]);
}

printf("displaying the matrix m2\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",m2[i][j]);
}
printf("\n");
}

//finding the sum of two matrices
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	   m3[i][j]=m1[i][j]+m2[i][j];
	}

}
printf("displaying the resultant matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",m3[i][j]);
}
printf("\n");
}
getch();
}
