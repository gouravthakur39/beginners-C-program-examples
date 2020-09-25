#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,sum=0,siz,i;
    p=malloc(5*sizeof(int));
    printf("Enter the elements : \n");
    for(i=0;i<5;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    printf("The Elements are : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\nThe sum of the 5 Elements is %d.",sum);
    printf("\nEnter the Number of elements to Re Allocate : ");
    scanf("%d",&siz);
    p=realloc(p,siz*sizeof(int));
    printf("Enter the elements : \n");
    sum=0;
    for(i=0;i<8;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    printf("The Elements are : ");
    for(i=0;i<8;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\nThe sum of the 8 Elements is %d.",sum);
    free(p);
    return 0;
}
