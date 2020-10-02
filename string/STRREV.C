
#include<stdio.h>
#include<conio.h>

void main()
{

char s1[10],s2[10];
int i,j,len=0;
clrscr();
printf("enter a string\n");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++)
len++;
for(i=len-1,j=0;i>=0;i--,j++)
{
s2[j]=s1[i];
}
s2[j]='\0';
printf("rev string=%s",s2);
if(s2[j]!=s1[i])
printf("\nit is pal");
else
printf("\nit is not pal");
getch();
}
