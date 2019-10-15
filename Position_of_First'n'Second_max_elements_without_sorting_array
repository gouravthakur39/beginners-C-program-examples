#include<stdio.h>
void main()
{
    int size;
    int i;
    int arr[100];
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter an element:");
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    printf("The required entered array are:\n");
    printf("Slno.     Array elements\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t\t%d\n",i+1,arr[i]);
    }
    int fmax=arr[0];
    int smax=arr[0];
    int spos=1;
    int fpos=1;
    for(i=0;i<size;i++)
    {
        if(arr[i]>fmax)
        {
            smax=fmax;
            fmax=arr[i];
            spos=fpos;
            fpos=i+1;
        }
        else if(arr[i]>smax && arr[i]!=fmax)
        {
            smax=arr[i];
            spos=i+1;
        }
    }

    printf("First max element :%d   at position:%d\n",fmax,fpos);
    printf("Second max element:%d   at position:%d\n",smax,spos);

}
