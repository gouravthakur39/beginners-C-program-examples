#include<stdio.h>
#include<conio.h>
#include<string.h>
char copy(char*);
void main()
{
char *str1;
clrscr();
puts("\n enter any string:");
gets(str1);
printf("\n before call to fn str1=%s",str1);
copy(str1);
printf("\n after call to fn str1=%s",str1);
//puts(str1);
getch();
}
char copy(char *str)
{
char str2[25];
printf("\n enter string str2:");
scanf("%s",str2);
strcpy(str,str2);
return(*str);
}
