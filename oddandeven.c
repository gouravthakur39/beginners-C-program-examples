// Program to tell if an integer number is even or odd

#include <stdio.h>

int main(){

int number;
printf("Enter an integer number\n");
scanf("%d",&number);
if (number %2 ==0)
   printf("The number %d is even\n",number);
else{
   printf("The number %d is odd\n",number);
}
return 0;
}
