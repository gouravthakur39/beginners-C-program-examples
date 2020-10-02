#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
   FILE *fp;
   int i;
   clrscr();
   fp=fopen("D:\\abc.txt","wb");
   printf("Input an integer: ");
   scanf("%d",&i);
   if (fscanf(fp, "%d", &i))
      printf("The integer read was: %i\n", i);
   else
   {
      fprintf(fp, "Error reading an integer from stdin.\n");
      exit(1);
   }
  getch();
}
