#include<stdio.h>
int r,c;

int add(int arr1[r][c],int arr2[r][c],int arr3[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    return arr3;
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
            scanf("%d",*(arr+i)+j);
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
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
    return arr;
}

int main()
{
    int i,j,sum=0;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    inp(arr,r,c);
    printf("\nThe Matrix 1 is :\n");
    print(arr,r,c);
    int arr1[r][c],arr2[r][c];
    inp(arr1,r,c);
    printf("\nThe Matrix 2 is :\n");
    print(arr1,r,c);
    add(arr,arr1,arr2,r,c);
    printf("\n");
    printf("The Addition Matrix is :\n");
    print(arr2,r,c);
    return 0;
}
