#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a=malloc(sizeof(int)),i;
    *a=10;
    printf("Using malloc() - *a = malloc(sizeof(int))");
    printf("\n%d\n",*a);
    printf("Using calloc() the memory to store 3 values - a = (int*)calloc(3,sizeof(int)).");
    a=(int*)calloc(3,sizeof(int));
    a[0]=1;
    a[1]=2;
    a[2]=3;
    printf("\nThe elements are : ");
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
