// getwand putw example
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void main()
{
   FILE *fp;
   int word;
   clrscr();
   /* place the word in a file */
   fp = fopen("d:\\xyz.txt", "wb");
   if (fp == NULL)
   {
      printf("Error opening file %s\n");
      exit(1);
   }
   word = 95;
   putw(word,fp);
   if (ferror(fp))
       printf("Error writing to file\n");
   else
       printf("Successful write\n");
    fclose(fp);

//   reopen the file
   fp = fopen("d:\\xyz.txt", "rb");
   if (fp == NULL)
   {
      printf("Error opening file %s\n");
      exit(1);
   }

   /* extract the word */
   word = getw(fp);
     if (ferror(fp))
       printf("Error reading file\n");
   else
       printf("Successful read: word = %d\n", word);

   /* clean up */
   fclose(fp);
   getch();
}

