#include<stdio.h>
int n;
void search(int *arr[n],int n,int ele)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(arr+i)==ele)
        {
            printf("The Element %d is Found in the position %d.",ele,i+1);
            return;
        }
    }
    printf("The Element %d is not Found.",ele);
}

void main()
{
    int n,i,ele;
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
    printf("\nEnter the Element that has to be found : ");
    scanf("%d",&ele);
    search(arr,n,ele);
}
