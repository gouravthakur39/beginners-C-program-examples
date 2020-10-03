/*To Check whether the given matrix is a square matrix or not*/
#include<stdio.h>
main()
{
    int x[3][3],sum0=0,sum1=0,sum2=0,i,j,value=0;
    printf("Enter the values in the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    printf("You constructed the below matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d   ",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)                        //diagonal
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum0+=x[i][j];
            }
        }
    }
    for(i=0;i<3;i++)                        //row
    {
        for(j=0;j<3;j++)
        {
            sum1+=x[i][j];
            if(sum1==sum0)
            {
                sum1=0;
                value=1;
            }
            else
            {
                value=0;
            }
        }
    }
    for(i=0;i<3;i++)                        //column
    {
        for(j=0;j<3;j++)
        {
            sum2+=x[j][i];
            if(sum2==sum0)
            {
                sum2=0;
                value=1;
            }
            else
            {
                value=0;
            }
        }
    }
    if(value==1)
        printf("The above Matrix is Magic square.\n");
    else
        printf("The above Matrix is not a Magic square.\n");
}

