#include<stdio.h>
void main()
{
	int i,j,k,a[100][100],b[100][100],c[100][100],p,q,r,s;
        printf("enter the number of rows and coloums of first matrix:\n");
        scanf("%d%d",&p,&q);
        printf("enter the number of rows and coloumes of second matrix:\n");
        scanf("%d%d",&r,&s);
	printf("enter the elements of the first matrix\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the elements of the second matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("the first matrix is\n");
	for(i=0;i<p;i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
		{
			printf(" %d",a[i][j]);
		}
	}
	
	printf("\nthe second matrix is\n");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<s;j++)
		{
			printf(" %d",b[i][j]);
		}
	}
	
	//Multiplication logic
        if(q == r)
       {
	for(i=0;i<p;i++)
	{
		for(j=0;j<s;j++)
		{
			c[i][j]=0;
			for(k=0;k<q;k++)
                       {
				c[i][j]+=a[i][k]*b[k][j];
			}

		}
	}
	
	printf("\n the multiplication matrix is\n");
	for(i=0;i<p;i++)
	{
		printf("\n");
		for(j=0;j<s;j++)
		{
			printf(" %d",c[i][j]);
		}
	}
        printf("\n");
        }
        else
		printf("\nmatrix multiplication is not possible\n");         
}
