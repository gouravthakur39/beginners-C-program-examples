//prog to read file content
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp1;
 char ch;
 clrscr();
 fp1=fopen("data.txt","r");

 if(fp1==NULL)
{
  printf("\n source file can't open");
  fclose (fp1);
   exit(0);
 }

 fp1=fopen("data.txt","r");
 while(1)
 {
  ch=fgetc(fp1);
  if(ch==EOF)
   break;

   printf("%c",ch);
 }
getch();
}
