#include <stdio.h>
#include <stdlib.h>
int n;
struct node
{
    int data;
    struct node *info;
} * start;
void create(int n)
{
    int i;
    struct node *temp, *p, *newnode;
    p = malloc(sizeof(struct node));
    start = p;
    printf("enter the data:\n");
    scanf("%d", &p->data);
    p->info = NULL;
    temp = start;
    for(i = 2; i <= n; i++)
    {
        newnode = malloc(sizeof(struct node));
        printf("enter the data:\n");
        scanf("%d", &newnode->data);
        newnode->info = NULL;
        temp->info = newnode;
        temp = temp->info;
    }
}
void display(void)
{
    struct node *temp;
    temp = start;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->info;
    }
    printf("\n");
}
int main(void)
{
    printf("enter the no of node(s):");
    scanf("%d", &n);
    create(n);
    printf("\n");
    display();
    return 0;
}
