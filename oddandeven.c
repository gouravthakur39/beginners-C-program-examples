// Program to tell if an integer number is even or odd

#include <stdio.h>

void main(){

int number;
printf("Enter an integer number\n");
scanf("%d",&number);
if (number %2)
   printf("The number %d is odd\n",number);
else
   printf("The number %d is even\n",number);
}
