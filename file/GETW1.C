#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
main()
{
 int i;
 FILE  *fp;
 fp=fopen("infile.txt","w");
 printf("enter no to file (-1) to finish:\n");
 while(i!=-1)
 {
    scanf("%d",&i);
    putw(i,fp);
  }
  fp=fopen("infile.txt","r");
  while((i=getw(fp))!=EOF)
  printf("%d",i);
  getch();
}