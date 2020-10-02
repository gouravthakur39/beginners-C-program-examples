#include<conio.h>
#include<stdio.h>

void main()
{

 FILE *fp1;
 FILE *fp2;

 int no;
 char name[20];
 clrscr();
 printf("Enter no & name ");
 scanf("%d%s",&no,name);
 fp1=fopen("abc.txt","w");
 if(fp1==NULL)
  {
   printf("File is not exist\n");
  }
  else{
  printf("File is opened successfully\n");
  printf("printing on file sucessfully\n");
  fprintf(fp1,"%d%s",no,name);
  }
 fclose(fp1);
 fp2=fopen("abc.txt","r");
 fscanf(fp2,"%d%s",&no,name);
  printf("%d\t%s",no,name);
 getch();
}



