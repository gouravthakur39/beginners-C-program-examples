#include <stdio.h>
#include <stdlib.h>
void populate(int* a)
{
    int *parray=malloc(2*sizeof(int));
    parray[0]=37;
    parray[1]=73;
    a=parray;
}

int main()
{
    printf("It gives segmentation fault because the pointer variable is assigned to NULL.");
    printf("\n\nWhen the pointer is assigned to NULL and if its attempting to print it will get error because of not a valid location.");
    printf("\n\nNow the program is modified such that pointer variable is not pointing to NULL.");
    int *a=malloc(2*sizeof(int));
    populate(a);
    printf("\n\na[0]=%d and a[1]=%d\n",a[0],a[1]);
    return 0;
}
