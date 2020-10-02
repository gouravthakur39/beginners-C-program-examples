#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d,max;
clrscr();
printf("enter 4 values\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d)));
printf("max=%d",max);
getch();
}
