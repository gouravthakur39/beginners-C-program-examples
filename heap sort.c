
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
#include<stdio.h>
 
void create(int []);
void down_adjust(int [],int);
 
void main()
{
	int heap[30],n,i,last,temp;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	printf("\nEnter elements:");
	for(i=1;i<=n;i++)
		scanf("%d",&heap[i]);
	
	//create a heap
	heap[0]=n;
	create(heap);
	
	//sorting
	while(heap[0] > 1)
	{
		//swap heap[1] and heap[last]
		last=heap[0];
		temp=heap[1];
		heap[1]=heap[last];
		heap[last]=temp;
		heap[0]--;
		down_adjust(heap,1);
	}
 
	//print sorted data
	printf("\nArray after sorting:\n");
	for(i=1;i<=n;i++)
		printf("%d ",heap[i]);
}
 
void create(int heap[])
{
	int i,n;
	n=heap[0]; //no. of elements
	for(i=n/2;i>=1;i--)
		down_adjust(heap,i);
}
 
void down_adjust(int heap[],int i)
{
	int j,temp,n,flag=1;
	n=heap[0];
	
	while(2*i<=n && flag==1)
	{
		j=2*i;	//j points to left child
		if(j+1<=n && heap[j+1] > heap[j])
			j=j+1;
		if(heap[i] > heap[j])
			flag=0;
		else
		{
			temp=heap[i];
			heap[i]=heap[j];
			heap[j]=temp;
			i=j;
		}
	}
}