#include<stdio.h>
main()
{
    int x[10],i,j,pos=0,neg=0,zero=0;
    printf("Enter those 10 numbers:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>0)
            pos++;
        else if(x[i]==0)
            zero++;
        else
        neg++;
    }
    printf("Total number of positive numbers:%d\n",pos);
    printf("Total number of negative numbers:%d\n",neg);
    printf("Total number of zeros:%d\n",zero);
}
