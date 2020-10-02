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
  printf("\nEnter id name and marks of student...");
  scanf("%d%s%d",&id,name,&m);

  fprintf(fp,"%d\t%s\t%d\n",id,name,m);

  printf("\n add more y/n..");
  scanf("\n%c",&ch);
 }while(ch=='y');
 fclose(fp);
 printf("\n Data stored successfully...");
 getch();
}
