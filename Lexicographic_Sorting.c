// Lexicographic sorting is the way of sorting words based on the alphabetical order of their component letters.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[20][20], temp[20];
    int n, i, j;
    printf("Enter the Number of Strings:\n");
    scanf("%d", &n);

    // Getting strings input
    printf("Enter the Strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    // storing strings in the lexicographical order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                // swapping strings if they are not in the lexicographical order
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    printf("Strings in the Lexicographical Order is:\n");
    for (i = 0; i < n; i++)
    {
        puts(str[i]);
    }
}
