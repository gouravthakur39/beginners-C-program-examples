#include<conio.h>
union data
{
int i;
char c;
float f;
};

void main()
{
   int choice;
   union data d;
   clrscr();
   printf("\n1-int 2-float 3-char\n");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
	printf("enter a integer value\n");
	scanf("%d",&d.i);
	printf("%d",d.i);
	printf("\n%u",&d.i);
	break;
   case 2:
	printf("enter a float value\n");
	scanf("%f",&d.f);
	printf("%f",d.f);
	printf("\n%u",&d.f);
	break;
   case 3:
	printf("enter a char value\n");
	scanf("\n%c",&d.c);
	printf("%c",d.c);
	printf("\n%u",&d.c);
	break;
   default:
	printf("not a valid choice\n");

   }
   getch();
}