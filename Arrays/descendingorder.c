#include<stdio.h>
main()
{
    int x[10],i,j,z;
    printf("Enter the value of x:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(x[j]>x[i])
            {
                z=x[j];
                x[j]=x[i];
                x[i]=z;
            }
        }
    }
    printf("The number in descending order is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",x[i]);
    }
}
