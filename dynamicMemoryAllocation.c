#include <stdio.h>
#include <stdlib.h>

#define SIZE 0x100
int main(void)
{
    char *ptr = malloc(SIZE);
    snprintf(ptr, SIZE, "data : %s ", "hello world");
    printf("%s\n", ptr);

    return 0;
}
