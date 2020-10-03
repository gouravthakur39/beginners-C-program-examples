#include<stdio.h>
main()
{
    int x[10],i,max=0;
    printf("Enter the numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>max)
            max=x[i];
    }
    printf("The maximum among those numbers is %d.\n",max);
}
