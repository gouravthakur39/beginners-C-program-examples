//A c program to print prime numbers from 1 to n

#include<stdio.h>
#include<math.h>
void main(){
    int num, i, j,check;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Prime numbers are:\n");
    //traversing all numbers from 2 to entered integer num
    for(i=2; i<num; i++)
    {
        //loop to check divisibility
        for(j=2; j<i; j++)
        {
            //checking if it is divisible by any smaller number
            check=sqrt(i);
            if(check%j == 0)
            {
                //if it is divisible exiting from loop
                break;
            }
        }
        //printing the number if it is never divisible by numbers smaller than itself
        if(i == j){
            printf("%d\n", i);
        }
    }
}
