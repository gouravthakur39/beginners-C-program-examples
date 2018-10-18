#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size, i, max;
    int *array;
    printf("Enter number of numbers: ");
    scanf("%d", &size);
    //creating an array of entered size
    array = malloc(size * sizeof(int));
    printf("Enter %d numbers: \n", size);
    //accepting each number and adding them in the array
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    //traversing the array and comparing each element to integer max
    for(i=1; i<size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    //printing the integer max
    printf("The largest number is %d\n", max);
}
