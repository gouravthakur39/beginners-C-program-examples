#include<stdio.h>
#include<stdlib.h>
int a;
void sort1(int *arr,int a)
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for (j=i+1;j<a;j++)
        {
            if(*(arr+j)<*(arr+i))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}

void main()
{
    int i,n,m,j,k=0;
    int *arr1,*arr2,*arr3;
    printf("Array 1 : \n");
    printf("Number of elements in the Array 1 : ");
    scanf("%d",&n);
    arr1=(int*) malloc(n*sizeof(int));
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
    printf("Number of elements in the Array 2 : ");
    scanf("%d",&m);
    arr2=(int*) malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    {
        printf("Enter the Element %d : ",i+1);
        scanf("%d",(arr2+i));
    }
    printf("The Elements are : ");
    for(i=0;i<m;i++)
    {
        printf("%d ",*(arr2+i));
    }
    if(n<m)
    {
        sort1(arr1,n);
        arr3=(int*) malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr1[i]==arr2[j])
                {
                    arr3[k++]=arr1[i];
                    break;
                }
            }
        }
        printf("\nThe Intersection Elements are : ");
        for(i=0;i<k;i++)
        {
            printf("%d ",*(arr3+i));
        }
    }
    else
    {
        sort1(arr2,m);
        arr3=(int*) malloc(m*sizeof(int));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr2[i]==arr1[j])
                {
                    arr3[k++]=arr2[i];
                    break;
                }
            }
        }
        printf("\nThe Intersection Elements are : ");
        for(i=0;i<k;i++)
        {
            printf("%d ",*(arr3+i));
        }
    }
    free(arr1);
    free(arr2);
    free(arr3);
}
