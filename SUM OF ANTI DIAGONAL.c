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

int print(int arr[r][c],int r,int c,int* sum)
{
    int i,j,col=c-1,max=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        *sum+=arr[i][col];
        if(arr[i][col]>max)
        {
            max=arr[i][col];
        }
        col--;
    }
    return max;
}

int main()
{
    int i,j,sum=0,maxi;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c],arr1[r];
    inp(arr,r,c);
    printf("The Matrix is :\n");
    maxi=print(arr,r,c,&sum);
    printf("The Maximum element in the Anti Diagonal is %d.",maxi);
    printf("\nThe sum of the Anti Diagonal elements is %d",sum);
    return 0;
}


