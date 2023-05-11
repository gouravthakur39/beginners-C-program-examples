#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node {			//node structure for polynomial
    int coeff;
    int exp;			//exponent
    struct Node *next;		//pointing to next node
} *poly = NULL;			//type pointer polynomial 
void create(void)
{				//creating  polyno mial
    struct Node *t, *last = NULL;	//temporary pointer, last pointer
    int num, i;
    printf("Enter number of terms");
    scanf("%d", &num);
    printf("Enter each term with coeff and exp\n");
    for (i = 0; i < num; i++) {	//loop
	t = (struct Node *) malloc(sizeof(struct Node));	//create new node
	scanf("%d%d", &t->coeff, &t->exp);	//reading  2 data 
	t->next = NULL;		//linking each node into linklist
	if (poly == NULL) {	//first node check
	    poly = last = t;
	} else {
	    last->next = t;
	    last = t;
	}
    }
}

void Display(struct Node *p)
{
    while (p) {
	printf("%dx%d +", p->coeff, p->exp);	//printing node
	p = p->next;		//shifting node
    }
    printf("\n");
}

long Eval(struct Node *p, int x)
{				//evalution
    long val = 0;
    while (p) {			//scanning through polynomial
	val += p->coeff * pow(x, p->exp);
	p = p->next;
    }
    return val;
}

// TODO insert
// TODO delete

int main(void)
{
    create();
    Display(poly);
    printf("%ld\n", Eval(poly, 1));
    return 0;
}
