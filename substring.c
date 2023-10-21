// C program to print all possible substrings of a given string
#include<stdio.h>
#include<string.h>
// Function to print all sub strings
void subString(char str[], int n) 
{
    // Pick starting point
    for (int len = 1; len <= n; len++) 
    {    
        // Pick ending point
        for (int i = 0; i <= n - len; i++) 
        {
            //  Print characters from current
            // starting point to current ending
            // point.  
            int j = i + len - 1;            
            for (int k = i; k <= j; k++) 
                printf("%c",str[k]);
             
            printf("\n");
        }
    }
}
 
// Driver program to test above function
int main() 
{
    char str[] = "abcdef";
    subString(str, strlen(str));
    return 0;
}
