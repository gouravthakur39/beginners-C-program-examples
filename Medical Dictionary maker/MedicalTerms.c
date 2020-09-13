#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct med
{
	char word[20];
	char meaning[150];
};
int main()
{
	int i;
	struct med wordsave[10];
	FILE *f;
	f = fopen("med.dat","w");
	if(!f)
	{
		printf("Error!");
		exit(0);
	}
	
	for(i=0;i<2;i++)
	{
		printf("Enter word: \n");
		gets(wordsave[i].word);
		printf("Enter it's meaning: \n");
		gets(wordsave[i].meaning);
		fwrite(&wordsave[i],1,sizeof(wordsave[i]),f);
		
	}
	
	fclose(f);
	
	return 0;
}
