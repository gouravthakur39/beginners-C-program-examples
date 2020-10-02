//program of auto storage class
#include<stdio.h>
#include<conio.h>

void main()
{
	auto int i;
	i = 10;
	clrscr();
	printf("\n %d",i);

	{
		auto int i = 5;
		printf("\n%d",i);
	}

	printf("\n%d",i);
	getch();
}