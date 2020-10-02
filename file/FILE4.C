//prog to count no of lines,spaces and no of chara ...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
  int l=0,s=0,c=0;
 char ch;
 clrscr();
 fp=fopen("lmn.txt","r");
 if(fp==NULL)
{
  printf("\n file can't open");
   exit(0);
 }
 while(1)
 {
  ch=fgetc(fp);
  if(ch==EOF)
  break;
  c++;
  if(ch==' ')
   s++;
  if(ch=='\n')
   l++;
 }
fclose(fp);
printf("\n no of spaces=%d",s);
printf("\n no of lines=%d",l);
printf("\n no of count=%d",c);
 c= c-l-s;
printf("\n no of character=%d",c);
getch();
}

