//Write a C program to find the factors of a given integer.

#include(stdio.h>
#include(conio.h)
void main( )
{
int no,x;
clrscr( );
printf("Enter the required number:");
scanf("%d",&no);
printf("\nThe factors are:");
for(x=1; x<=no; x++)
{
if(no%x==0)
printf("\n%d",x);
}
getch( );
}

Output:-
Enter the required number: 27
The factors are:
1
3
9
27 