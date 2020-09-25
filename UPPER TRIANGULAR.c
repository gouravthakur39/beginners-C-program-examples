#include<stdio.h>
int r,c;

int up(int arr[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                arr[i][j]=0;
            }
        }
    }
    return arr;
}
int inp(int arr[r][c],int r,int c,int* sum)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("Enter the elements in the row %d : \n",i+1);
        for(j=0;j<c;j++)
        {
            printf("Enter : ");
            scanf("%d",&arr[i][j]);
            *sum+=arr[i][j];
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
    int i,j,sum=0;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    inp(arr,r,c,&sum);
    printf("The Matrix is :\n");
    print(arr,r,c);
    printf("The Upper Triangular Matrix is :\n");
    up(arr,r,c);
    print(arr,r,c);
    printf("%s",(sum>100)?"Yes":"No");
    return 0;
}


