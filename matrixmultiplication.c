//SMA:
#include<stdio.h>
void mul(int c1,int c2;int a[][c1],int b[][c2],int c[][c2],int r1,int c1,int r2,int c2)
{
	for(int i=0;i<r1;i++)//to move through rows in first
	{
		for(int j=0;j<c2;j++)//to move throught columns in second matrix
		{
			*(*(c+i)+j)=0;
			for(int k=0;k<c1;k++)//access each in the row and the column and multiply and keep adding it
			{
				*(*(c+i)+j)+=*(*(a+i)+k)*(*(*(b+k)+j));
			}
		}
	}
}

void inp(int c;int (*a)[c],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",(*(a+i)+j));//takes elements in first matrix
		}
	}
}
void out(int c;int a[][c],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",*(*(a+i)+j));//takes elements in second matrix
		}
		printf("\n");
	}
}
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the row1 col1 ro2 col2\n");//assuming the multiplication rules are satisfied
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	int a[r1][c1];int b[r2][c2];int c[r1][c2];
	printf("Enter elements of first\n");
	inp(a,r1,c1);
	printf("Enter elements of second\n");
	inp(b,r2,c2);
	mul(a,b,c,r1,c1,r2,c2);//mulitplies two matrices
	printf("Multiplied matrix:\n");
	out(c,r1,c2);//prints multiplied matrix
	return 0;
}
