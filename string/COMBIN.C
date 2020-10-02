#include<stdio.h>
#include<conio.h>
 void main()
 {
  char str[15];
  int i;
  clrscr();
  printf("\n Enter a string");
  gets(str);
  i=strlen(str);
  printf("\n Length of %s is %d",str,i);
  printf("\n %s is upper case",str);
  strup(str);
  printf("%s",str);
  printf("\n %s is lower case",str);
  strlwr(str);
  printf("%s",str);
  printf("\n %s in Reverse",str);
  strrev(str);
  printf("%s",str);
  printf("\n\n %s is set with Z",str);
  strset(str);
  printf("%s",str);
  getch();
  }
