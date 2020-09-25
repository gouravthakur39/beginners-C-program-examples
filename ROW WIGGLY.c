#include<stdio.h>
int r,c;

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
}

int print1(int arr[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
}

int wiggly(int arr[r][c],int arr1[r][c],int r,int c)
{
    int i,j,k;
    for(i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<c;j++)
            {
                arr1[i][j]=arr[i][j];
            }
        }
        else
        {
            k=0;
            for(j=c-1;j>=0;j--)
            {
                arr1[i][k]=arr[i][j];
                k++;
            }
        }
    }
    return arr1;
}

int main()
{
    int i,j;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c],arr1[r][c];
    inp(arr,r,c);
    printf("The Matrix is :\n");
    print(arr,r,c);
    wiggly(arr,arr1,r,c);
    printf("The wiggly Path Array is :\n");
    print1(arr1,r,c);
    return 0;
}
