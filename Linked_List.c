#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;

//NODE head = NULL;


NODE *first, *second, *third;

int main()
{
    (*first).data = 5;
    (*first).next = second;

    printf("%d", (*first).data);
}
