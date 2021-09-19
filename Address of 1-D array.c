#include <stdio.h>

int main(void)
{
    int a[100], i, n, *add;
    printf("enter the size :");
    scanf("%d", &n);
    printf("enter the no :");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        add = a + i;
        printf("add is %p value is %d\n", (void *)add, *add);
    }

    return 0;
}
