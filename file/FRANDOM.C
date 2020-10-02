#include<stdio.h>
#include<conio.h>
void main()
{
char ch,f;
int n;
FILE *fp;
clrscr();
fp=fopen("d:\\xyz.txt","w");
printf("Enter any string:");
while(ch!='\n')
{
  fputc(ch,fp);
  ch=getchar();
  }
fclose(fp);
fp=fopen("d:\\xyz.txt","r");

printf("\nReading from the beginning of the file:\n");
fseek(fp,4,0);
printf("%c %d",fgetc(fp),ftell(fp));

printf("\nReading from the current postion of the file:\n");
fseek(fp,2,1);
printf("%c %d",fgetc(fp),ftell(fp));

printf("\nReading from the end of the file:\n");
fseek(fp,-5,2);
printf("%c %d",fgetc(fp),ftell(fp));

printf("\nReading from the beginning of the file:\n");
rewind(fp);
fscanf(fp,"%c",&f);
printf("%c %d",fgetc(fp),ftell(fp));
fclose(fp);
getch();
}

