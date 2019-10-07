/*************************************************************************************/
// Since size of character is 1 byte when the character pointer is de-referenced 
// it will contain only first byte of integer. 
// If machine is little endian then *c will be 1 (because last byte is stored first)
// if machine is big endian then *c will be 0.

//    higher memory
//    ----->
//    +----+----+----+----+
//    |0x01|0x00|0x00|0x00|
//    +----+----+----+----+
//    c
//    |
//   &i

//    +----+----+----+----+
//    |0x00|0x00|0x00|0x01|
//    +----+----+----+----+
//    c
//    |
//   &i
/*************************************************************************************/

#include <stdio.h> 
int main()  
{ 
   unsigned int i = 1; 
   char *c = (char*)&i; 
   if (*c)     
       printf("Little endian\n"); 
   else
       printf("Big endian\n"); 
   return 0; 
}
