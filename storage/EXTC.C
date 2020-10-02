#include<stdio.h>
#include<conio.h>

//void fn1();
//void fn2();

  int a,b;  //External or global variables

void main()
{
	a = 10;
	  b = 20;
	clrscr();
	printf("\na= %d \tb= %d",a,b);
	fn1();
	fn2();
	fn1();
	getch();
}

fn1()
{
	a = a+10;
	b = b+20;
	printf("\na= %d \tb= %d",a,b);
}

fn2()
{
	a = a-5;
	b = b-5;
	printf("\na= %d \tb= %d",a,b);
}
