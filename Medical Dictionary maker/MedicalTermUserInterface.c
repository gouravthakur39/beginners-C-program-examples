#include <stdio.h>
#include <stdlib.h>

struct med
{
	char word[20];
	char meaning[150];
};

void main()
{
	int i = 0;
	char UserWord[20];
	struct med wordsave[10];
	FILE *f1;
	f1 = fopen("med.dat","r");
	fseek(f1,0,SEEK_SET);
	
	printf("Enter the word you want to search: \n");
	
	scanf("%s",&UserWord);
	while(!feof(f1))
	{
		fread(&wordsave[i],sizeof(wordsave[i]),1,f1);
		if(strcmp(UserWord,wordsave[i].word)==0)
		{
			printf("meaning:\n%s\n",wordsave[i].meaning);
		}
		
		i++;
	}
	fclose(f1);
}
