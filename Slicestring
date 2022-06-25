#include <stdio.h>
void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[m + i];
        i++;
    }
    st[i] = '\0';
}
int main()
{
    char st[] = "Hello";
    slice(st, 1, 4);
    printf("%s", st);
    return 0;
}
