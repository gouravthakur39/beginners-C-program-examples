#include<stdio.h>
int r,c;

int rowsum(int arr[r][c],int arr1[r],int r,int c)
{
    int i,j,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
        arr1[i]=sum;
        sum=0;
    }
    return arr1;
}

int printrow(int arr1[r],int r)
{
    int i;
    for(i=0;i<r;i++)
    {
        printf("\n%d",arr1[i]);
    }
    return 0;
}
int inp(int arr[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("Enter the elements in the row %d : \n",i+1);
        for(j=0;j<c;j++)
        {
            printf("Enter : ");
            scanf("%d",&arr[i][j]);
        }
    }
    return arr;
}

int print(int arr[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return arr;
}

int main()
{
    int i,j;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c],arr1[r];
    inp(arr,r,c);
    printf("The Matrix is :\n");
    print(arr,r,c);
    rowsum(arr,arr1,r,c);
    printf("The Row sum is :");
    printrow(arr1,r);
    return 0;
}


