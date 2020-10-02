#include <stdio.h>
#include <alloc.h>
#include <string.h>
#include<conio.h>

void main()
{
   char *str;
   clrscr();
   str=(char*)calloc(7,sizeof(char));
   str="hello";
   printf("String is %s\n", str);
   free(str);
   printf("String is %s\n", str);
   getch();

}

