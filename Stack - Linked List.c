#include<stdio.h>
#include<stdlib.h>
#define SIZE 11

typedef struct node{
  char data;
  struct node *link;
}ctype, *LinkStack;

void push(LinkStack * L, char elem);
void pop(LinkStack *L);
char top(LinkStack L);
void display(LinkStack L);

int main() {
	LinkStack A = NULL;
	int i;
	char word[SIZE] = {'P', 'R', 'O','G','R','A','M','M','I','N','G'};
	char first;
	
	
	for (i = 0; i < SIZE; i++) {
		push(&A, word[i]); /* INSERTING THE CHARACTER IN LINK LIST*/
	}
	
	
	printf("Example word:\n");
	display(A);
	
	printf("\n\nAfter popping/deleting the first/top most element:\n");
	pop(&A);
	display(A);
	

	first = top(A);
	printf("\n\nTop most element in the stack: %c\n", first);
	
	return 0;
}

/* PUSHING/INSERTING EACH CHARACTER TO THE STACK USING LINKLIST

	NOTE: 
	Since this is a stack, I used the First in Last out order and we dont need to traverse, 
	thats why the element is interchanged/reversed.
*/

void push(LinkStack * L, char elem) {
	LinkStack temp;
	temp = (LinkStack)malloc(sizeof(ctype));
	
	if (temp != NULL) {
		temp->data = elem;
		temp->link = *L;
		*L = temp;
	}
}


/* DELETING/REMOVING THE TOP MOST ELEMENT IN THE STACK*/
void pop(LinkStack *L) {
	LinkStack temp;
	
	temp = *L;
	*L = temp->link;
	free(temp);
}


/* RETURNING THE TOP MOST ELEMENT IN THE STACK*/
char top(LinkStack L) {
	char elem;
	elem = L->data;
	
	return elem;
}


/* FOR DISPLAYING THE ELEMENTS */
void display(LinkStack L) {
	LinkStack trav;
	
	for (trav = L; trav != NULL; trav = trav->link) {
		printf("%c", trav->data);
	}
}


