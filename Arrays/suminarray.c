#include<stdio.h>
main()
{
    int x[10],i,sum=0;
    printf("Enter those ten numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    printf("The sum of ten numbers is %d.\n",sum);
}
