#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define STRING "Ashwath Computers Pvt. Ltd."

void main()
{
char *cp;
clrscr();
cp=(char *)malloc(sizeof(STRING));
if(cp==NULL)
{
printf("no memory\n");
exit(1);
}
strcpy(cp,STRING);
printf("%s\n",cp);
cp=(char *)realloc(cp,sizeof(STRING)+1);
if(cp==NULL)
{
printf("no memory\n");
exit(1);
}
printf("%s\n",strcat(cp,"?"));
free(cp);
getch();
}
