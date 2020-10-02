//initial values of all the storage classes
#include<stdio.h>
#include<conio.h>

int b; //external variable

void main()
{
	auto int a;
	static int c;
	register int d;
	clrscr();

	printf("Value of a :%d \t Value of b:%d \nValue of c: %d\tValue of d: %d",a,b,c,d);

	getch();
}