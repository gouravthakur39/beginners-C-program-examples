/*****************Activity 6.1**************************/
// program for sequential search
#include<stdio.h>
#include<conio.h>
#define MAX 20
void main()
{
	int a[MAX];
	int i,ele,size,count;
	count=0;
	clrscr();
	printf("\n enter the size of an array: ");
	scanf("%d",&size);
	printf("\n Enter %d elements in array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array elements are : ");
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}


		printf("\n enter the element to search for: ");
		scanf("%d",&ele);
		for(i=0;i<size;i++)
		{
		if(ele == a[i])
		{
			printf("\n Element found at %d position.",i+1);
			count++;
			break;
		}

		}
		if(count==0)
		{
		printf("\n Element not found.");
		}




		getch();
}



           
                 
