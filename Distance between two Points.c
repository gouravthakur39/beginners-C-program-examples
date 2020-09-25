#include<stdio.h>
#include<math.h>
int n;

void dis(int arr1[n],int arr2[n],int n)
{
    int i,diff=0;
    for(i=0;i<n;i++)
    {
        diff+=pow((arr2[i]-arr1[i]),2);
    }
    printf("\nThe distance is %lf.",sqrt(diff));
}

void main()
{
    int n=3,i;
    int *arr1,*arr2;
    arr1=(int*)malloc(n*sizeof(int));
    arr2=(int*)malloc(n*sizeof(int));
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
    free(arr1);
    free(arr2);
}
