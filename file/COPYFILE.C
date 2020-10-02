//prog to copy one file into another...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp1,*fp2;
 char ch;
 clrscr();
// fp1=fopen("d:\\xyz.txt","r");
 fp1=fopen("d:\\abc2.txt","w");

 if(fp1==NULL)
{
  printf("\n source file can't open");
  fclose (fp1);
   exit(0);
 }
/* if(fp2==NULL)
 {
  printf("\n destination file can't open..");
  fclose(fp2);
  exit(0);
 }*/

 while(1)
 {
  ch=fgetc(fp1);
  if(ch==EOF)
   break;
  fputc(ch,fp1);  //fputc(char,fileptr);
 }
 fclose(fp1);
// fclose(fp2);
 printf("\n file copied successfully...\n");

 fp2=fopen("d:\\xyz.txt","r");
 while(1)
 {
  ch=fgetc(fp2);
  if(ch==EOF)
   break;
   printf("%c",ch);
 }
getch();
}