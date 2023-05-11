#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter a and b\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a and b are %d %d",a,b);
    getch();
}
