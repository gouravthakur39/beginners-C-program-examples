#include<stdio.h>
#include<stdlib.h>

int matrix(int* arr,int r,int c)
{
    int i,j,k=0;
    int **a;
    a=(int**)calloc(r,sizeof(int*));
    for(i=0;i<r;i++)
    {
        a[i]=(int*)calloc(c,sizeof(int));
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a[i][j]=arr[k++];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return a;
}

void main()
{
    int *arr,n,i,r,c,**ptr,j;
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
    printf("\nNumber of Rows in the matrix : ");
    scanf("%d",&r);
    c=(n/r)+1;
    printf("The number of Columns is : %d\n",c);
    ptr=matrix(arr,r,c);
    printf("The pointer after returning to main function is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    free(arr);
    free(ptr);
}

