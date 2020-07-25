/*Write a C program that uses functions to perform the following:
a) Create a singly linked list of integers
b) Delete a given integer from the above linked list
c) Display the contents of the above list after deletion
CODE:-*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head, *tail = NULL;
void addNode(int data)
{
 struct node *newNode=(struct node*)malloc(sizeof(struct node));
 newNode->data=data;
 newNode->next=NULL;
 if(head==NULL)
 {
 head=newNode;
 tail=newNode;
 }
 else
 {
 tail->next = newNode;
 tail = newNode;
 }
}
void display()
{
 struct node *current = head; // the node current will point to head
 if(head==NULL)
 {
 printf("List is empty\n");
 return;
 }
 printf("\nNodes of singly linked list: \n");
 while(current!= NULL)
 {
 printf("%d ", current->data); // each node is printed
 current = current->next;
 }
 printf("\n");
}
void delete()
{
 struct node *ptr,*ptr1;
 int item,i=0,flag,loc,j;
 ptr = head;
 if(ptr == NULL)
 {
 printf("\nEmpty List\n");
 }
 else
 {
 printf("\nWhich integer do you want to delete?\n");
 scanf("%d",&item);
 while (ptr!=NULL)
 {
 if(ptr->data == item)
 {
 printf("Integer found at node %d ",i+1);
 flag=0;
 loc=i;
 break;
 }
 else
 {
 flag=1;
 }
 i++;
 ptr = ptr -> next;
 }
 if(flag==1)
 {
 printf("Integer not found!\n");
 }
 }
 ptr=head;
 for(j=0;j<loc;j++)
 {
 ptr1 = ptr;
 ptr = ptr->next;
 if(ptr == NULL)
 {
 printf("\nDeletion is not possible!");
 return;
 }
 }
 ptr1->next = ptr ->next;
 free(ptr);
 printf("\nDeleted node %d \n",loc+1);
}
int main()
{
 int n,m,data;
 printf("How many nodes do you want to create?\n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 printf("Integer node %d data : ",(i+1));
 scanf("%d",&data);
 addNode(data);
 }
 display();
 delete();
 display();
}
/*OUTPUT:-
How many nodes do you want to create?
4
Integer node 1 data : 13
Integer node 2 data : 16
Integer node 3 data : 19
Integer node 4 data : 21 
Nodes of singly linked list:
13 16 19 21
Which integer do you want to delete?
19
Integer found at node 3
Deleted node 3
Nodes of singly linked list:
13 16 21*/
