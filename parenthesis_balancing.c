/*left bracket is missing ({})} stack got empty expression not exhausted
right bracket is missing({} stack not empty expression exhausted
mismatch({)}incoming and bracket at top is not matching
*/
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	char  *ptr_s;
	int size;
	int top;
};
typedef struct stack stack;
void createstack(stack* ptr)
{
	ptr->ptr_s=malloc(sizeof(char)*ptr->size);//allocates memory for stack array
	ptr->top=-1;//sets top to -1
} 
void push(stack* ptr,char ele)
{
	if(ptr->top==(ptr->size)-1)//when mac size reached
		printf("Stack is full(overflow)");
	else
	{
		ptr->ptr_s[++(ptr->top)]=ele;//push ele into stack
	}
}	
char pop(stack* ptr)
{
	char ele;
	if(ptr->top==-1)
	{
		return -1;//empty stack
	}
	else
	{
		ele=ptr->ptr_s[ptr->top--];//pop element and store in ele
		return ele;
	}
}
void display(stack st)
{
	printf("Stack display:\n");
	if(st.top==-1)
		printf("Empty stack\n");
	else
	{
		while(st.top!=-1)
		{
			printf("%c\n",st.ptr_s[st.top--]);//show contents of stack(LIFO order)
		}
	}
}
void traverse(char inp[100],stack* st)
{
	char token=inp[0];
	int count=0;
	int k=1;
	while(token!='\0')
	{
		if(token=='(' || token=='[' ||token=='{')//if opening brackets encountered push them into stack
			push(st,token);
		else if(token==')' || token=='}' || token==']')
		{
	
			if(st->top==-1)//if closing bracket exists and stack empty it means there are extra closing brackets
			{
				printf("Extra closing brackets\n");
				count=1;
				break;
			}
			char ch=st->ptr_s[st->top];
		    if((ch=='(' && token==')') ||(ch=='[' && token==']')||(ch=='{' && token=='}'))//when the opening and closing are of same type pop out the opening bracket from stack
			{	
				int x=pop(st);
			}
			else//if they don't match then the brackets have a mismatch
			{
				printf("Mismatch\n");
				count=1;
				break;
			}
		}
		token=inp[k];//go to next character in input
		k++;
	}
	if(st->top!=-1 && count==0)//when input is exhausted but stack not empty it means extra opening brackets
		printf("Extra opening brackets\n");
	else//if it did not break from any condition
	{
		if(count==0)
			printf("Balanced parenthesis\n");//then it is balanced
	}

}
int main()
{
	stack* ptr_st;
	ptr_st=malloc(sizeof(stack));//allocate memory for a stack pointer
	printf("Enter the size of the stack");
	scanf("%d",&ptr_st->size);//input size
	char str[ptr_st->size];
	createstack(ptr_st);//initialize stack structure
	printf("enter the string");
	scanf("%s",str);
	traverse(str,ptr_st);
	return 0;
}
	
