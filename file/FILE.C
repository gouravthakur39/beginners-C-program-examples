
//first prog on files...
#include<stdio.h>
#include<conio.h>

void main()
{
 FILE *fp;
 clrscr();
 fp=fopen("d:\\xyz.txt","w");
 if(fp==NULL)
  printf("\n file can't open......");
 else
  printf("\n file opened successfully...");
getch();
}


/*prog to copy one file into another...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp1,*fp2;
 char ch;
 clrscr();
 fp1=fopen("d:\\xyz2.txt","r");
 fp2=fopen("d:\\abc2.txt","w");

 if(fp1==NULL)
{
  printf("\n source file can't open");
  fclose (fp2);
   exit(0);
 }
 if(fp2==NULL)
 {
  printf("\n destination file can't open..");
  fclose(fp1);
  exit(0);
 }

 while(1)
 {
  ch=fgetc(fp1);
  if(ch==EOF)
   break;

  fputc(ch,fp2);  //fputc(char,fileptr);
 }
 fclose(fp1);
 fclose(fp2);
 printf("\n file copied successfully...\n");

 fp2=fopen("d:\\abc2.txt","r");
 while(1)
 {
  ch=fgetc(fp2);
  if(ch==EOF)
   break;
   printf("%c",ch);
 }
getch();
} */


/*
//prog to print string in a file..
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 char str[15],ch;
 clrscr();
 fp=fopen("d:\\lmn.txt","w");
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
}while(ch=='y');

 fclose(fp);
 printf("\n strings copied successfully..");
 getch();
}
  */

/*
//prog to count no of lines,spaces and no of chara ...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
  int l=1,s=0,c=1;
 char ch;
 clrscr();
 fp=fopen("d:\\lmn.txt","r");
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
 c= c-l-s;
printf("\n no of chara=%d",c);
getch();
} */

/*

//prog to store data using formatted i/p o/p funs.....
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 int id,m;
 char name[10];
 char ch;
 clrscr();
 fp=fopen("d:\\pqr.txt","w");
 if(fp==NULL)
{
  printf("\n file can't open");
   exit(0);
 }


 do
 {
  printf("\n enter id name and marks of student...");
  scanf("%d%s%d",&id,name,&m);

  fprintf(fp,"%d\t%s\t%d\n",id,name,m);

  printf("\n add more y/n..");
  scanf("\n%c",&ch);
 }while(ch=='y');
 fclose(fp);
 printf("\n data stored successfully...");
 getch();
} */


/*
void main()
{

 FILE *fp;
 FILE *f2;

 int no,nno;
 char name[20],nname[20];
 clrscr();
 printf("Enter no & name ");
 scanf("%d%s",&no,name);
 fp=fopen("abc.txt","w");
 if(fp==NULL)
  {
   printf("File is not present\n");
  }
  else{
  printf("File is opened successfully\n");
  printf("printing on file sucessfully\n");
  fprintf(fp,"%d%s",no,name);
  }
 fclose(fp);
 f2=fopen("abc.txt","r");
 fscanf(f2,"%d%s",&nno,nname);
 printf("%d\t%s",nno,nname);
 getch();
}

    */


















