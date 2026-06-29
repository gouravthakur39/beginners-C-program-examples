#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;

struct LinkedList{
    NODE *Head;
};
typedef struct LinkedList LIST;

NODE* allocate_Node(int data, NODE *next){
    NODE *mem = malloc(sizeof(NODE));
    mem->data = data;
    mem->next = next;

    printf("allocated NODE %p\n", mem);
    return mem;
}

LIST* allocate_LinkedList(NODE *HEAD){
    LIST *mem = malloc(sizeof(LIST));
    mem->Head = HEAD;

    printf("allocated LIST %p\n", mem);
    return mem;
}

void displayAlldata(LIST *list){
    int i = 0;
    NODE *cursor = list->Head;
    do {printf("node (%i), data = %i\n", i+1, cursor->data); i++; cursor = cursor->next;} while (cursor->next != NULL);

    if (cursor->next == NULL){
        printf("node (%i), data = %i\n", i+1, cursor->data);
        printf("reached tail (%p)\n", cursor);

        cursor = NULL;
    } else{
        printf("unknown error (displayALlData)\n");
    }
    free(cursor);
}

NODE *first, *second, *third, *fourth, *fifth;
LIST *linkedlist;

int main()
{
    fifth = allocate_Node(2, NULL);
    fourth = allocate_Node(8, fifth);
    third = allocate_Node(5, fourth);
    second = allocate_Node(6, third);
    first = allocate_Node(1, second);

    linkedlist = allocate_LinkedList(first);

    if (third == NULL || second == NULL || first == NULL || linkedlist == NULL){
        return 1; // if malloc fails
    } else {printf("checkpoint 1\n");}

    // display
    displayAlldata(linkedlist);

    // free memory
    free(third);
    free(second);
    free(first);
    free(linkedlist);
    return 0;
}
// changes #1 the previous version didnt allocate memory for the 3 nodes pointers; segfault fixes
// changes #2 linkedlist struct