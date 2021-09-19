// sizeof() operator in c is used to calculate the size of a variable
// used inside the program and return the size in integer in the form
// of memory bytes

#include <stdio.h>
int main(void)
{
    int a = 5;
    char ch = 'X'; // Capital X
    printf("Size of a : %ld Bytes\n", sizeof(a));
    printf("Size of X : %ld Bytes\n", sizeof(ch));
    return 0;
}
