// Leap year check using nested if statements

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
    if(y%4==0) 
     {
      if(y%100==0) //In case of century
       {
         if(y%400==0)
          {
            printf("\n%d is a leap year",y);
            exit(0);
          }
         else
           {
            printf("\n%d is not a leap year",y);
            exit(0);
           }
      }
      else
       printf("\n%d is a leap year",y);
     }
     else
       printf("\n%d is not a leap year",y);

}
