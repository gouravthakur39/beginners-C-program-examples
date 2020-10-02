#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 char *ptr;
 clrscr();

 ptr=(char*)malloc(6);
 ptr="ashwath";
 printf("\nname is=%s",ptr);

 ptr=(char*)realloc(ptr,8);
 strcat(ptr,"computer");
 printf("\n\nname is=%s",ptr);

 ptr=(char*)realloc(ptr,20);
 strcat(ptr,"solapur");
 printf("\nname=%s",ptr);
 getch();
 }