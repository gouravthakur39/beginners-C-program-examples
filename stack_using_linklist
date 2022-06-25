#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node* link;
} *top=NULL;
void push(int x)
{

	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=x;
	new->link=top;
	top=new;
} 
void display()
{

	struct node *temp;
	temp=top;
	
	if(top==NULL)
	{
		printf("Underflow");
	} 
	else
	{
		while(temp!=NULL)
		{
		
			printf("%d",temp->data);
			printf("\n");
				temp=temp->link;
		}
	}
}
void pop()
{
	 
	struct node *temp;

	if(top==NULL)
	{
		printf("No element to deletes ");
	}
	else
	{
			temp=top;
		printf("Popped element is %d\t",temp->data);
		top=top->link;
		free(temp);
	}
}

int main()
{ 
 

	int x;
	int ch;
	do{
	printf("\t1.Push\t2.pop\t3.display\t4.exit\t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("	Enter element\t");
		scanf("%d",&x);
		push(x);
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		case 4:exit(0);
	}
}while(ch!=0);
getch();
}
