//Normal LL with all fns
//kinda incomplete - work in progress
//TO ADD - fn to reverse the LL


#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node* link;
};

typedef struct node node;

node *head=NULL, *head2=NULL;

//*head=NULL;
//*head2=NULL;

void Binsert(int);
void Einsert(int,node*);
void Minsert(int);
void Display(node*);
void Bdelete();
void Edelete();
void Mdelete(int);
void DeleteLL(node*);
//void copy();
//node* locate(node*, int);
//void reverse(node*);
//void swaplink(node*);
//void len(node*);


int main()
{
	while(1)
	{
		int opt,ele;
		printf("\nEnter what you wanna do:\n1.Binsert\n2.Einsert\n3.Minsert\n4.Display\n5.Bdelete\n6.Edelete\n7.Mdelete\n8.Copy\n9.DeleteLL\n10.Reverse\n11.Quit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				{
					printf("\nEnter the element");
					scanf("%d",&ele);
					Binsert(ele);
					break;
				}
			case 2:
				{
					printf("\nEnter the element");
					scanf("%d",&ele);
					Einsert(ele,head);
					break;
				}
			case 3:
				{
					printf("\nEnter the element");
					scanf("%d",&ele);
					Minsert(ele);
					break;
				}
			case 4:
				{
					printf("\nEnter the LL(1/2)");
					scanf("%d",&ele);
					if(ele==1)
						Display(head);
					else
						Display(head2);
					break;
				}
			case 5:
				{
					Bdelete();
					break;
				}
			case 6:
				{
					Edelete();
					break;
				}
			case 7:
				{
					printf("\nEnter the element you wanna delete:");
					scanf("%d",&ele);
					Mdelete(ele);
					break;
				}
			/*case 8:
				{
					copy();
					break;
				}
			case 9:
				{
					printf("\nEnter the LL(1/2)");
					scanf("%d",&ele);
					if(ele==1)
						DeleteLL(head);
					else
						DeleteLL(head2);
					break;
				}
			case 10:
				{
					reverse(head);
					break;
				}
			case 11:
				{
					swaplink(head);	
				}

			case 12:
				{
					exit(0);
				}*/
		}
	}
	return 0;
}

void Binsert(int ele)
{
//	if (head==NULL)
//		return;
	node* p=head;
	node* temp=(node*)malloc(sizeof(node));
	temp->info=ele;
	temp->link=head;
	head=temp;
}

void Einsert(int ele,node* temph)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->info=ele;
	node* p;
	p=temph;
	while(p->link!=NULL)
		p=p->link;
	temp->link=NULL;
	p->link=temp;
}

void Minsert(int ele)
{
	if(head==NULL)
	{
		Binsert(ele);
		return;
	}
	if (head->info>ele)
	{
		Binsert(ele);
		return;
	}	
	node *p,*q,*temp=(node*)malloc(sizeof(node));
	temp->info=ele;
	p=head;
	q=head->link;
	while(q!=NULL)											//q->link!=null?????????????????????????????????????????? works??????????????????????????????????
	{
		if(q->info>=ele)
		{
			p->link=temp;
			temp->link=q;
			return;
		}		
		p=p->link;
		q=q->link;
	}
	Einsert(ele,head);
}

void Display(node* temph)
{
	node* p=temph;
	while(p!=NULL)
	{
		printf("%d->",p->info);
		p=p->link;
	}
	printf("\n");
}				
				
void Bdelete()
{
	node* p=head;
	head=head->link;
	free(p);
}

void Edelete()
{
	node *p,*q;
	p=head;
	while(p->link->link!=NULL)
		p=p->link;
	q=p->link;
	p->link=NULL;
	free(q);
}

void Mdelete(int ele)
{
	if (head->info==ele)
	{
		Bdelete();
		return;
	}
	node *p=head,*q=head->link;
	while(q->link!=NULL)										//q->link!=null?????????????????????????????????????????? doesnt work 
	{
		if(q->info==ele)
		{
			p->link=q->link;
			free(q);
			return;
		}
	}
}

void DeleteLL(node* temph)
{
	node *p=temph,*q=temph->link;
	while(q!=NULL)
	{
		free(p);
		p=q;
		q=q->link;
	}
	free(p);
	temph=NULL;
}

void copy()
{
	DeleteLL(head2);
	node *p,*q;
	p=head;
	q=head2;
	while(p!=NULL)
		Einsert(p->info,head2);
}

node* locate(node* head, int ind)
{
	node *p;
	int x;
	p= head->link;
	x=0;
	while(x!=ind||p!=NULL)
	{
		p=p->link;
		x++;
	}
	return p;
}
/*
void reverse(node* head)
{	
	printf("111111111111111111111111111111111111");
	node *x = head, *p, *q; 
	int n=0, temp=0,i;
	for (i=0;x!=NULL;i++)
		n++;
	printf("222222222222222222222222222222222222");
	for(i=0;i<n/2;i++)
	{
		p=locate(head,i);
		q=locate(head,n/2-i);
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
		temp = p->info;
		p->info=q->info;
		q->info = temp;//mind fucked
	}
}
	
				
void swaplink(node* head)
{
	node *p,*q;
	q=head;
	int leng=len(head);
	int count=leng-1,i,n=0;
	for(i=0;i<leng-1;i++)
	{				{
		while( n<count)
		{
			p=q;
			q=q->link;
		}
		q->link=p;
		n++;
	}
}

int len(node* head)
{
	node* p=head;
	int x=1;
	while (p->link!=NULL)
	{
		p=p->link;
		x++;
	}
	return x;
}
				
				
				
		*/		
					
				
				
				
				
