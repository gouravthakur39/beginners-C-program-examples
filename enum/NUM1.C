#include <stdio.h>

enum countries

 {
 England,
 Ireland,
 Scotland,
 Wales,
 Danmark,
 Island,
 Norge,
 Sverige
 };

main ()              /* Electronic Passport Program */

{ 
  enum countries birthplace, getinfo();

printf ("Insert electronic passport\n");
birthplace = getinfo();

switch (birthplace)
   {
   case England : printf ("Welcome home!\n");
                  break;
   case Danmark :
   case Norge   : printf ("Velkommen til England\n");
		  break;
   }
 getch();
}

enum countries getinfo()         /* interrogate passport */

{
return (England);
}
