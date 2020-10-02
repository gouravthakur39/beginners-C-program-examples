//nested switch
#include<stdio.h>
#include<conio.h>

void main()
{
 int choice;
 char ch;
 clrscr();
 printf("1.BCA\t 2.MCA\n");
 printf("enter a choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:printf("a-FYBCA\t b-SYBCA\t c-TYBCA\n");
	printf("enter a option\n");
	scanf("\n%c",&ch);
	switch(ch)
	{
	case 'a':printf("fee is 8000/-\n");
		 break;
	case 'b':printf("fee is 10000/-\n");
		 break;
	case 'c':printf("fee is 12000/-\n");
		 break;
	default :printf("wrong choice\n");
	       //	break;
		 }
		break;
case 2:printf("A-FYMCA\t B-SYMCA\n");
       printf("enter a choice");
       scanf("\n %c",&ch);
       switch(ch)
       {
       case 'A':printf("fee is 15000/-\n");
		break;
       case 'B':printf("fee is 18000/-\n");
		break;
       default : printf("not a right choice\n");
//	       break;
	       }
  }
  getch();
  }