#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
fp=fopen("ash1.txt","w");
if(fp==NULL)
{
printf("file is not created\n");
getch();
exit(1);
}
printf("file created succesfully.....\n");

getch();
}