#include<stdio.h>
main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("Enter the values of a:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }
    printf("Enter the values of b:\n");
     for(i=0;i<3;i++)
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
            sum[i][j]=a[i][j]+b[i][j];
        }

    }
    printf("The sum is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\n",sum[i][j]);
        }

    }

}
