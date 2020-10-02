#include<stdio.h>
void main()
{
int m[2][2][2],i,j,k;
clrscr();
printf("Enter elements:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
scanf("%d",&m[i][j][k]);
}
}
}

printf("displaying the matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
printf("%d\t",m[i][j][k]);
}
printf("\n");
}
printf("\n\n");
}
getch();
}
