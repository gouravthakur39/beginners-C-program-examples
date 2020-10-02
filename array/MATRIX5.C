#include<stdio.h>
#include<conio.h>

void main()
{
int m[3][3],i,j,sum;
clrscr();
printf("enter the elements in an array\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	scanf("%d", &m[i][j]);
}
printf("displaying sum of the column\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",m[i][j]);
}
printf("\n");
}

for(i=0;i<3;i++)
{
	sum=0;
	for(j=0;j<3;j++)
	{
	   sum=sum+m[j][i];
	   printf(" %d",m[i][j]);
	}
	printf(" %d",sum);

}

getch();
}
