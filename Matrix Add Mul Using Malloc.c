#include<stdio.h>
#include<stdlib.h>

int** read(int** a,int r,int c)
{
   int i,j;
   for(i=0;i<r;i++)
   {
       printf("Row %d Elements :\n",i+1);
       for(j=0;j<c;j++)
       {
            printf("Enter the element %d : ",j+1);
            scanf("%d",&a[i][j]);
       }
   }
   return a;
}

int** alc(int** a1,int r,int c)
{
    int i;
    for(i=0;i<r;i++)
    {
        a1[i]=(int*)malloc(c*sizeof(int));
    }
    return a1;
}

void print(int **a,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int** add(int **a1,int **a2,int **a3,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }
    return a3;
}

int** mul(int **a1,int **a2,int **a4,int r,int c)
{
    int i,j,k,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<r;k++)
            {
                sum+=(a1[i][k])*(a2[k][j]);
            }
            a4[i][j]=sum;
            sum=0;
        }
    }
    return a4;
}

int** main()
{
    int r,c;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    printf("Matrix 1 : \n");
    int **a1;
    a1=(int**)malloc(r*sizeof(int*));
    a1=alc(a1,r,c);
    read(a1,r,c);
    print(a1,r,c);
    printf("\nMatrix 2 : \n");
    int **a2;
    a2=(int**)malloc(r*sizeof(int*));
    a2=alc(a2,r,c);
    read(a2,r,c);
    print(a2,r,c);
    printf("\nThe Sum of the two matrix is :\n");
    int **a3;
    a3=(int**)malloc(r*sizeof(int*));
    a3=alc(a3,r,c);
    add(a1,a2,a3,r,c);
    print(a3,r,c);
    printf("\nThe Product of the two matrix is :\n");
    int **a4;
    a4=(int**)malloc(r*sizeof(int*));
    a4=alc(a4,r,c);
    mul(a1,a2,a4,r,c);
    print(a4,r,c);
    free(a1);
    free(a2);
    free(a3);
    free(a4);
    return 0;
}

