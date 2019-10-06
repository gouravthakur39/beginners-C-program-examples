#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,sum1=0,sum2=0;
    
    scanf("%d", &n);
    int a[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d ", &a[i][j]);
            if(a[i][j]>=-100&&a[i][j]<=100)
            {
                if(i==j)
                {
                    sum1+=a[i][j];
                }
                if(j==(n-1-i))
                {
                    sum2+=a[i][j];
                }
            }
        }
    }
    if((sum1-sum2)<0)
    {
        printf("%d", (-((sum1)-(sum2))));
    }
    else
    {
        printf("%d", ((sum1)-(sum2)));
    } 
    return 0; 
}
