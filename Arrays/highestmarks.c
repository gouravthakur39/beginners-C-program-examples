/*To find the highest marks among group of 10 students in 5 classes.*/
#include<stdio.h>
main()
{
    int x[5][10],i,j,max=0;
    printf("Enter the marks of 10 Students of class 1:\n");
    for(i=0;i<5;)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&x[i][j]);
            if(max<x[i][j])
                max=x[i][j];
        }
        i++;
        if(i==1)
            printf("Enter the marks of 10 students of class 2:\n");
        if(i==2)
            printf("Enter the marks of 10 students of class 3:\n");
        if(i==3)
            printf("Enter the marks of 10 students of class 4:\n");
        if(i==4)
            printf("Enter the marks of 10 students of class 5:\n");
    }
    printf("The Matrix formed for storing the marks of all 50 students is:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Maximum marks among all 50 students of 5 classes are: %d\n",max);

}
