#include<stdio.h>
#include<stlib.h>
int n;

void pro(int arr1[n],int arr2[n],int n)
{
    int i,prod=0;
    for(i=0;i<n;i++)
    {
        prod=prod+(arr1[i]*arr2[i]);
    }
    printf("\nThe Scalar Product of two Arrays is : %d.",prod);
}

void main()
{
    int n=2,i;
    int *arr1,*arr2;
    arr1=(int*) malloc(2*sizeof(int));
    arr2=(int*) malloc(2*sizeof(int));
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
    pro(arr1,arr2,n);
    free(arr1);
    free(arr2);
}
