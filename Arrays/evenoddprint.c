#include<stdio.h>
main()
{
    int x[10],i,j=0,k=0,even[10],odd[10];
    printf("Enter the 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);

        if(x[i]%2==0)
        {
            even[j]=x[i];
                j++;
        }
        else
        {
            odd[k]=x[i];
            k++;
        }
    }
    printf("Even numbers are:\n");
    for(i=0;i<j;i++)
    {
        printf("%d\n",even[i]);

    }
    printf("Odd numbers are:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",odd[i]);
    }

}
