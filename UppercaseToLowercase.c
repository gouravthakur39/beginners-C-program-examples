// Uppercase character to lowercase String


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char String[100];
	printf("Enter a String of characters: ");
	gets(String);
	Tolower(String);
	return 0;
}

void Tolower(char *String)
{
	int length = strlen(String);
	int i;
	for(i=0;i<length;i++)
	{
		if(String[i]>='A'&&String[i]<='Z')
			String[i]+= 'a'-'A';
	}
	printf("The string in Lower case is: %s",String);
}
