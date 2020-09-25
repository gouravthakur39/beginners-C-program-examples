#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i;
    printf("THE ARRAY IS : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    int *p=a,*q=a+1;
    printf("\n\nThe pointer Initially points to the First Element of the Array : p is %d.",*p);
    p=p+1;
    printf("\n\nThe Addition of Pointer and Integer is Valid : (p+1) = %d.",*p);
    p=1+p;
    printf("\n\nThe Addition of Integer and a Pointer is Valid : (1+p) = %d.",*p);
    printf("\n\nNow the pointer p points to the First Element of the Array : p is %d.",*p);
    printf("\n\nThe Pointer q points to the second element of the Array : q is %d",*q);
    p=a;
    printf("\n\nThe Addition of Pointer and a Pointer is Valid Only in an Array : p+q = %d.",(*p)+(*q));
    p=a+2;
    printf("\n\nNow The pointer p points to the third Element of the Array : p is %d.",*p);
    printf("\n\nThe Subtraction of integer from a Pointer is Valid only in an Array : p-1 is %d.",*p-1);
    printf("\n\nNow The pointer p points to the third Element of the Array : p is %d.",*p);
    printf("\n\nThe Subtraction of integer from a Pointer is Valid only in an Array : 1-p is %d.",4-*p);
    p=a+3;
    printf("\n\nNow The pointer p points to the Fourth Element of the Array : p is %d.",*p);
    q=a+1;
    printf("\n\nNow The Pointer q points to the second element of the Array : q is %d",*q);
    printf("\n\nThe Subtraction of Pointer from a Pointer is Valid only in an Array : p-q is %d.",*p-*q);
    printf("\n\nNow The Pointer p points to 4 and the Pointer q points to 2.");
    printf("\n\nThe Pointer and Pointer comparison is Valid : (p>q) prints True(1) | Answer is %d",*p>*q);
    printf("\n\nIt is Not Valid to compare a pointer and a Integer unless the pointer is DeReferenced to get a Value");
    printf("\n\nIt is not valid to compare the Pointer to a 0.");
    printf("\n\nIt is valid to compare the Pointer to a null.\n");
}
