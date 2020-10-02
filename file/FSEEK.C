#include <string.h>
#include <stdio.h>
#include<conio.h>

void main()
{
   FILE *fp;
   char msg[] = "this is a test";
   char buf[20];
   clrscr();
   fp=fopen("C:\\uvw.txt", "w+");
   if (fp== NULL)
   {
      printf("Cannot open output file.\n");
   }
   fwrite(msg, strlen(msg)+1, 1, fp);
   fseek(fp,5,0);
   fread(buf, strlen(msg)+1, 1, fp);
   printf("%s", buf);
   fclose(fp);
   getch();
}

