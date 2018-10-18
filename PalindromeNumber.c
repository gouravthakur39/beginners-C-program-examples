//A program to check if given number is palindrome or not
//A palindrome number is a number that remains the same when its digits are reversed
//Example 121, 12321, 1234321

#include<stdio.h>

void main()
{
    int input, temp, reverse=0, digit;
    printf("Enter number: ");
    scanf("%d",&input);
    temp = input;
    //extracting each digit and adding it ot reverse
    while(input != 0){
        digit = input%10;
        input = input/10;
        reverse = reverse*10 + digit;
    }
    //comparing the original number and reversed number
    if(temp == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}
