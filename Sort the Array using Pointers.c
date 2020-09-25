#include<stdio.h>
#include<stdlib.h>

void sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(*(arr+j)<*(arr+i))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    printf("\nThe Elements After sorting : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void main()
{
    int *arr,n,i;
    printf("Enter the number of elements in the Array : ");
    scanf("%d",&n);
    arr=(int*) malloc(n*sizeof(int));
    printf("Enter the Elements :\n");
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
    sort(arr,n);
    free(arr);
}
