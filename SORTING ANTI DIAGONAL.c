#include<stdio.h>
int r,c;

int bubsort(int arr1[r],int r)
{
    int i,j,temp;
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<r-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    return arr1;
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

int print(int arr[r][c],int arr1[r],int r,int c,int count)
{
    int i,j,col=c-1,max=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        if(count==0)
        {
            if(arr[i][col]>max)
            {
                arr1[i]=arr[i][col];
            }
            col--;
        }
    }
    return arr1;
}

int main()
{
    int i,j,sum=0,count=0;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c],arr1[r],col=c-1;
    inp(arr,r,c);
    printf("The Matrix is :\n");
    print(arr,arr1,r,c,count);
    bubsort(arr1,r);
    for(i=0;i<r;i++)
    {
        arr[i][col]=arr1[i];
        col--;
    }
    count=1;
    printf("The Matrix is :\n");
    print(arr,arr1,r,c,count);
    return 0;
}
