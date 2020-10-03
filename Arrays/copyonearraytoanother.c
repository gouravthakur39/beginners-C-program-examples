#include<stdio.h>
main()
{
    int x[10],i,j,y[10];
    printf("Enter the 10 elements:\n");

    for(i=0;i<10;i++)
    {
         scanf("%d",&x[i]);
         y[i]=x[i];
    }
    printf("The elements in y array are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d",y[i]);
    }

}
