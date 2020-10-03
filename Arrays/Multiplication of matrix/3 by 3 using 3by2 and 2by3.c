#include<stdio.h>
main()
{
    int a[3][2],b[2][3],c[3][3],i,j,k;
    printf("Enter the Values in Matrix A:(3 by 2)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Values in Matrix B:(2 by 3)\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
       printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The Multiplication of Matrix A and B is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
            printf("\n");
    }
}


