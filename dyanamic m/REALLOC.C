//Program to reallocate the memory using realoc() function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>  //for exit() function
#include<alloc.h>

void main()
{
	int *ptr,*p;
	clrscr();

   ptr = (int*)malloc(5 * sizeof(int));
  //10 bytes size allocated

	if(ptr == NULL)
	{
		printf("No space");
		exit(1);
	}

	printf("Enter values:");
	for(p = ptr; p<ptr+5;p++)
		scanf("%d",p);

	for(p=ptr;p<ptr+5;p++)
	 printf("Value = %d \t Address = %u\n",*p,p);

  ptr = (int*)realloc(ptr,8 * sizeof(int));

	if(ptr == NULL)
	{
	printf("Reallocation Failed");
		exit(1);
	}

	printf("\nNew block reallocated successfully");
     printf("\n New block contains:\n");

  for(p=ptr;p<ptr+8;p++)
	 printf("Value = %d \t Address = %u\n",*p,p);

    printf("\nEnter new values for the reallocated block:");
   //	for(p = ptr+5; p<ptr+8;p++)  //or
	for(p=ptr;p<ptr+8;p++)
		scanf("%d",p);

printf("The new values in the list \n");
for(p=ptr;p<ptr+8;p++)
	 printf("Value = %d \t Address = %u\n",*p,p);
    getch();
}