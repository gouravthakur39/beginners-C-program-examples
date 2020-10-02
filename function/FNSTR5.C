/*fn with str2*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char concat(char *,char *);
char rev(char *);
void main()
{
char *str1,*str2;
clrscr();
printf("\n enter str1 &str2:");
gets(str1);
gets(str2);
printf("\n before call to fn:");
printf("\n str1=%s str2=%s",str1,str2);
concat(str1,str2);
printf("\n after call to fn:");
printf("\n concatenated string str1=%s",str1);
rev(str1);
printf("\n reverse string str2=%s",str1);
getch();
}
char concat(char *s1,char *s2)
{
strcat(s1,s2);
return(*s1);
}
char rev(char *s)
{
strrev(s);
return(*s);
}