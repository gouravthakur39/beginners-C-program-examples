#include <stdio.h>
#include<conio.h>
int main()
{
   char array[ 5 ];
   clrscr();

   printf( "array = %p\n&array[0] = %p\n" "   &array = %p\n",array, &array[ 0 ], &array );
   getch();
   return 0;

}