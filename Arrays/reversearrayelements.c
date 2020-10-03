#include<stdio.h>
main()
{
    int x[100],i,j,n,y[100];
    printf("Enter the number of elements to store in the array:\n");
    scanf("%d",&n);
    printf("Enter the %d numbers:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The order of numbers in the array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
    printf("\nThe reverse order of the numbers is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",x[i]);
    }
}
