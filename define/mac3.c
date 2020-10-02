//Macros with Arguments
#define AREA(x)( 3.14 * x * x ) 
main( ) 
{
 float r1 = 6.25,r2 = 2.5,a;
 a = AREA( r1 );
 printf("\nArea of circle = %f",a);
 a = AREA( r2 ) ; 
 printf("\nArea of circle = %f",a);
 }