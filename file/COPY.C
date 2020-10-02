#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
  FILE *fp;
  FILE *fp1;
  char str[50];
  fp=fopen("d:\\xyz.txt","r");
  fp1=fopen("d:\\abc.txt","w");
   //str=gets(fp);
while(fgets(str,49,fp)!=NULL)
 {
     fputs(str,fp1);
 //  str=fgets(fp);
 }
fclose(fp);
fclose(fp1);
getch();
}