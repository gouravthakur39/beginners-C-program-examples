#include <stdio.h>
#define MAX 5

int main()
	{
	int i,j = 0,num[MAX];
	printf("Enter numbers in the range of 1 to 9 \n");
	for(i = 0; i<MAX; )
		{
		scanf("%d",&num[i]);
		switch (num[i])
			{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: i++;
			break;
			default:
			    {
                 j = 1;
                 break;
			    }


			}
		if(j == 1)
        {
            printf("NO MORE INPUT");
            break;
        }


		}
		printf("Multiple of 3's \n\n");
		printMultiple(num, i);

		printf("\n\n\n");
		printf("EVEN numbers\n\n\n");
		printEven(num, i);
	}

	printMultiple(int num[MAX], int len)
	{

		int i,j,k;
		for(i = 0; i<len; i++)
			{
            int ans3 = num[i]%3;
            switch (ans3)
			{
            case 0:
                printf("%d \n", num[i]);
			}
			}
	}

	printEven(int num[MAX], int len)
	{

		int i,j,k;
		for(i = 0; i<len; i++)
			{
            int ans_even = num[i]%2;
            switch (ans_even)
			{
            case 0:
                printf("%d \n", num[i]);
			}
			}
	}
