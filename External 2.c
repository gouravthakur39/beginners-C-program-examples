#include<stdio.h>
#include<math.h>
#include "7.c"
int n;

void main()
{
    int n=3,i;
    int *arr1[n],*arr2[n];
    printf("Array 1 : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d : ",i+1);
        scanf("%d",(arr1+i));
    }
    printf("The Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr1+i));
    }
    printf("\nArray 2 : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d : ",i+1);
        scanf("%d",(arr2+i));
    }
    printf("The Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr2+i));
    }
    dis(arr1,arr2,n);
}
