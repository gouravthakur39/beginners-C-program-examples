#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void linearSearch(int arr[15], int n, int key)
{
	int i;
	int flag = 0;
	for(i=0; i<n; i++)
	{
		if (arr[i] == key)
		{
			printf("Match Found at %d index\n", i);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("Element not found\n");
	}
}

int main()
{
	int arr[15];
	int i, n, key;
	int choice = 1;
	printf("________________________________________\n");
	printf("|                                       |\n");
	printf("|  This program performs Linear Search  |\n");
	printf("|                                       |\n");
	printf("|_______________________________________|\n\n");
	
	printf("*This program has been coded in windows OS*\n\n");
	
	printf("Enter the no. of elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	system("cls");
	do
	{
		printf("Enter the element to be searched: ");
		scanf("%d", &key);
		linearSearch(arr, n, key);
		printf("Do you want to exit: 0) Yes 1) No\n");
		scanf("%d", &choice);
		if(choice == 0)
		{
			printf("Before exiting\nPrinting the array: ");
			for(i=0; i<n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
			printf("Thank you for visiting the code, have a good day!\n");
			
			printf("________________________________________\n");
			printf("|                                       |\n");
			printf("|  This program performs linear Search  |\n");
			printf("|                                       |\n");
			printf("|_______________________________________|\n\n");
			exit(0);
		}
	}	while(choice);
	
}
