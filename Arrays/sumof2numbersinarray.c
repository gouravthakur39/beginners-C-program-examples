#include<stdio.h>
main()
{
    int x[3],y[3],z[3],i;
    printf("Enter the value of x:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&x[i]);
    }
printf("Enter the value of y:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<3;i++)
    {
        z[i]=x[i] +y[i];
        printf("The sum of %d and %d is %d.\n",x[i],y[i],z[i]);
    }
}
