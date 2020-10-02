#include <stdio.h>
#include<conio.h>

void main()
{
   FILE *stream;
   clrscr();
   stream = fopen("MYFILE.TXT", "w");
   fprintf(stream, "This is a test");
   printf("The file pointer is at byte %d", ftell(stream));
   fclose(stream);
   getch();
}

