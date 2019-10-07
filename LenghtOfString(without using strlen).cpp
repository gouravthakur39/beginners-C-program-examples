#include<stdio.h>
#include<conio.h>
slength(char name[30]);
void main()
{
	int len;
	char name[30];
	printf("Enter any string\n");
	gets(name);
	len=slength(name);
	printf("lenght of '%s' is %d\n",name,len);
	getch();
}
slength(char name[30])
{
	int i=0,count=0;
	while(name[i]!='\0')
	{
		i++;
		count++;
	}
	return count;
}
