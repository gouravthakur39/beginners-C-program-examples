	/*	Name	:	EnumTest.c
		
		Objective:	Enum Demo
		
		Author	:	Amol Kulkarni
			
		Date	:	01/07/2011

		License	:	Educational
	*/

#include<stdio.h>		// header Files
#include<conio.h>

 enum COLOR {RED = 11,GREEN,BLUE};


int main()		// Stating Point of Execution
{

	int x;
	COLOR c;


	clrscr();		


	x = 2;
	c = BLUE;

	if( x == 0)
		printf("\nYou have selected Red Color");
	else if( x == 1)
		printf("\nYou have selected Green Color");
		else if( x == 2)
		printf("\nYou have selected Blue Color");
	
	if( c == RED)
		printf("\nYou have selected Red Color");
	else if( c == GREEN)
		printf("\nYou have selected Green Color");
		else if( c == BLUE)
		printf("\nYou have selected Blue Color");
	
	

	return 0;

}










