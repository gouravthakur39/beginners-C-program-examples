#include<stdio.h>    
#include<stdlib.h>  

//This program convert numbers into their corresponding characters

void convertNumbertoChar(long int n);

int main(){  
    long int n; 
    printf("Please Enter the Number = ");    
    scanf("%ld",&n);
    convertNumbertoChar(n); /* It's important to break your code in bloks,
    So let's make a function that solve our problem*/
}

void convertNumbertoChar(long int n){   
    long int r,sum = 0;
    while(n > 0){               // This loop change the position of number so we can print in the righ order
        r = (n % 10);           // Decompose the number
        sum = (sum * 10) + r;   // To compose the number     
        n = n / 10;             // n decrement
    }    
    n = sum;                   
    while(n > 0){               // Now we can print the characters
        r = n % 10;             // Selecting one number to print
        switch(r){              // Print the corresponding character for each case    
        case 1:    
        printf("one ");    
        break;    
        case 2:    
        printf("two ");    
        break;    
        case 3:    
        printf("three ");    
        break;    
        case 4:    
        printf("four ");    
        break;    
        case 5:    
        printf("five ");    
        break;    
        case 6:    
        printf("six ");    
        break;    
        case 7:    
        printf("seven ");    
        break;    
        case 8:    
        printf("eight ");    
        break;    
        case 9:    
        printf("nine ");    
        break;    
        case 0:    
        printf("zero ");    
        break;    
        default:    
        printf("undefined");    
        break;    
        }  
        n = n / 10;             //Decrementing n, ensuring the condition to the loop break
        }
        printf("\n");       
}  