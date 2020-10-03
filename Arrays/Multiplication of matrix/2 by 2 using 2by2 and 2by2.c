#include<stdio.h>
main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k;
    printf("Enter the Values in Matrix A:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Values in Matrix B:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
       printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The Multiplication of Matrix A and B is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
            printf("\n");
    }
}



