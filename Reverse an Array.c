#include<stdio.h>
int n;
void rev(int *arr[n],int n)
{
    int i,*temp;
    for(i=0;i<(n/2);i++)
    {
        temp=*(arr+i);
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nThe Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void main()
{
    int n,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int *arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d : ",i+1);
        scanf("%d",(arr+i));
    }
    printf("The Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    rev(arr,n);
}
