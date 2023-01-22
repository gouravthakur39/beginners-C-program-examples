#include<stdio.h>
/**
 * add - adds two numbers
 * this function would be called indirectly with function pointers
 * @a: integer
 * @b: integer
 * Return: sum of a and b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * main - entry point
 * the main function calls the add function indirectly using function pointers
 * Return: 0 (success)
*/
int main(void)
{
	int (*fptr)(int, int); /* This is the declaration of the function pointer.
							this pointer points to a function that takes two integers
							as arguments and return an integer */

	fptr = add;
	printf("%d", fptr(1,2));
}