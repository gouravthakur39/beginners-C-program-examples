#include<stdio.h>
main()
{
    int x[4],i,j,z;
    printf("Enter the 4 numbers:\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(x[j]<x[i])
            {
                z=x[i];
                x[i]=x[j];
                x[j]=z;
            }
        }
    }
    printf("The numbers in ascending order are:\n");
    for(i=0;i<4;i++)
    {
        printf("%d\t",x[i]);
    }
}
