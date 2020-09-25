#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n;

double** random(int n)
{
    int i;
    int *arr;
    arr=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d : ",i+1);
        scanf("%d",(arr+i));
    }
    printf("The Elements in the Random Function are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return arr;
}
void main()
{
    clock_t start, end;
    start=clock();
    int n,*ptr,i;
    double ctime;
    printf("Enter the number of elements in the Array : ");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
    ptr=random(n);
    end=clock();
    ctime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nThe time taken by the Random Function is %f seconds.",ctime);
    printf("\nThe Elements after returning the pointer to the array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
}
