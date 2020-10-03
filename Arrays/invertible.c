/*To check whether matrix is invertible or not*/
#include<stdio.h>
#include<math.h>
main()
{
    int i,j,x[3][3],k,m,det=0;
    printf("Enter the values in matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    printf("The Matrix A formed by user input values is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;;)
    {
        for(j=0;j<3;j++)
        {
                if(j==0)
                {
                    k=1;
                    m=2;
                }
                else if(j==1)
                {
                    k=0;
                    m=2;
                }
                else
                {
                    k=0;
                    m=1;
                }
                det+=pow(-1,i+j)*x[i][j]*(x[i+1][k]*x[i+2][m]-x[i+1][m]*x[i+2][k]);
            }
            break;
        }
        printf("\nThe Determinant value of the Matrix |A|= %d",det);
        if(det==0)
           {
            printf(" which is equal to 0.\n\n");
           }
        else
        {
            printf(" which is not equal to 0.\n\n");
        }
        printf("NOTE:-\n");
        printf("As per the rule, if the determinant value of the matrix is any 'non-zero' value then the Inverse of that matrix exists.\n\n");
        printf("Here, as the determinant value of Matrix A i.e |A| is %d,\n\n",det);
        if(det==0)
        {
            printf("\t\t\t\tInverse of A matrix does not exists or we can say that Matrix A is not invertible.\n");
        }
        else
            printf("\t\t\t\tInverse of A matrix exists or we can say that Matrix A is invertible.\n");
}
