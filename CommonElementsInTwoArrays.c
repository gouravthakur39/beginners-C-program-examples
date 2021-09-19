#include <stdbool.h>
#include <stdio.h>

bool already_found(int *fp, int maxi, int value)
{
    int i;
    for(i = 0; i < maxi; i++)
        if(fp[i] == value)
            return true;
    return false;
}

int main(void)
{
    int i, j, k, n;
    printf("enter the number of elements in an arrays\n");
    scanf("%d", &n);
    int a[n], b[n];
    k = 0;
    int found[n];
    printf("enter the elements of 1st array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elements of 2nd array\n");
    for(j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("The common numbers are: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] == b[j] && !already_found(found, k, a[i]))
            {
                printf("%d\n", b[j]);
                found[k] = b[j];
                k++;
            }
        }
    }
    return 0;
}
