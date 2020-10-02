//prog to print string in a file..
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 char str[15],ch;
 clrscr();
 fp=fopen("data.txt","w");
 if(fp==NULL)
 {
  printf("\n can't open a file...");
  exit(0);
 }
 do
 {
 printf("\n enter a string...");
 scanf("\n%s",str);
 fputs(str,fp);
 ch='\n';
 fputc(ch,fp);
 printf("\n add more y/n..");
 scanf("\n%c",&ch);
}while(ch=='y'||ch=='Y');
 fclose(fp);
 printf("\n strings copied successfully..");
 getch();
}

