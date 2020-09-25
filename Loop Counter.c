#include<stdio.h>

int main()
{
    int i=1;
    int *x=1;
    for(i=1;i<5;i++);
    printf("The final loop counter value is %d.",i);
    for(x=1;x<5;x++);
    printf("\nThe final loop counter value of pointer variable is %d.",x);
    printf("\nThe address of the pointer variable is %p.",&x);
    printf("\nThe address of the variable is %p.",&i);
    return 0;
}
