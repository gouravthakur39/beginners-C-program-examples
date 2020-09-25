#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int n,i,j;
    char temp;
    printf("Enter the number of elements in the Array : ");
    scanf("%d",&n);
    char *a;
    a=(char*)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d : ",i+1);
        scanf("%s",(a+i));
    }
    printf("The Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%c ",*(a+i));
    }
    for (i = 0; i < n-1; i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe Sorted Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%c ",*(a+i));
    }
    free(a);
}
