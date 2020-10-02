#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp;
char str[50];
clrscr();
fp=fopen("c:\\xyz.txt","w");
puts("Enter any string:");
gets(str);
fputs(str,fp);
fclose(fp);
printf("\nReading data from file\n");
fp=fopen("c:\\xyz.txt","r");
fgets(str,49,fp);
printf("%s",str);
fclose(fp);
getch();
}


