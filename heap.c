#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int firstfill(int *arr)
{
	int ele;
	printf("Enter:");
	scanf("%d",&ele);
	int x=0;
	while(ele!=-1)
	{
		arr[x]=ele;
		x++;
		printf("Enter:");
		scanf("%d",&ele);//keep scanning elements and place them in the array, stop when -1 is given
	}
	return x;//returns the number of elements 
}
void swap(int * arr,int p,int c)//swaps the parent node and child node
{
	int temp=arr[p];
	arr[p]=arr[c];
	arr[c]=temp;
}
void construction(int *arr,int x)
{
	int p=x/2-1;
	while(1)//x/2-1 to 0 
	{
		int temp=p;
		while(1)//each parent swap should check if it caused any invalid further occurances till last child
		{
			int lc=2*p+1;//formula of left child
			int rc;
			int max1;
			int flag;
			if(2*p+2<=x-1)//check if right child exists(if it is a parent node then left definitely exists)
			{
				rc=2*p+2;
				max1=(arr[lc]<arr[rc])?rc:lc;//choose max child
				if(max1==rc)
					flag=2;//1 means left is max 2 means right
				else
					flag=1;
			}
			else//right child doesn't exist
			{
				rc=-1;
				max1=lc;
				flag=1;
			}
			if(arr[p]>=arr[max1])//check if parent greater than max child
				flag=0;
			else//if not then swap
				swap(arr,p,max1);
			if(flag==0)//if no swap then no changes so break
				break;
			else if(flag==1)//check till last child, if left was swapped pass through left subtree
			{
				if(2*lc+1<=x-1)//check if left child exists
				{
		 			p=lc;//if it does then do the same steps again with the left child as the parent 
		 			continue;
		 		}
		 		else
		 			break;
			}
			else
			{
				if(2*rc+1<=x-1)//check if right child exists
				{
					p=rc;//if it does then make it the parent and repeat the process
					continue;
				}
				else
		 			break;
			}
		}
		p=temp-1;//when inner loop ends the last parent node and the subtrees are fixed, now move to the previous parent
		if(p==-1)
			break;//when root reached stop the process
	}
}
int delete(int *arr,int *len)
{
	int res=arr[0];
	arr[0]=arr[(*len)-1];//replace head(root) with last element
	int p=0;
	(*len)--;//means the last element is now not accessible using array
	while(1)//same process as inner loop in insert(done to fix the heaps property when one node is deleted)
	{
		int lc=2*p+1;
		int rc;
		int max1;
		int flag;
		if(2*p+2<=(*len)-1)
		{
			rc=2*p+2;
			max1=(arr[lc]<arr[rc])?rc:lc;
			if(max1==rc)
				flag=2;
			else
				flag=1;
		}
		else
		{
			rc=-1;
			max1=lc;
			flag=1;
		}
		if(arr[p]>=arr[max1])
			flag=0;
		else
			swap(arr,p,max1);
		if(flag==0)
			break;
		else if(flag==1)
		{
			if(2*lc+1<=(*len)-1)
			{
				p=lc;
				continue;
			}
			else
				break;
		}
		else
		{
			if(2*rc+1<=(*len)-1)
			{
				p=rc;
				continue;
			}
			else
				break;
		}
	}
	return res;//return the deleted element
}

int main()
{
	int arr[MAX];
	int len=firstfill(arr);//initially all elements are directly placed into an array
	printf("Number of elements:%d\n",len);
	printf("Before swaps:\n");
	for(int i=0;i<len;i++)
		printf("%d\n",arr[i]);//prints raw structure before heapify
	construction(arr,len);//constructs heap
	printf("After construction\n");
	for(int i=0;i<len;i++)//level order traversal
		printf("%d\n",arr[i]);//prints heap(after bottom down method is executed)
	while(len!=0)//gives descending order(as this is max heap)
	{
		int del=delete(arr,&len);
		printf("Deleted element:%d\n",del);
		printf("Heap after deletion\n");
		for(int i=0;i<len;i++)
			printf("%d\n",arr[i]);
	}
	return 0;
}
