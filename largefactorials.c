#include<stdio.h>

int a[20000];      //this program can only compute factorials
                   //with 20,000 or less digits but the range
int main()         //can be increased by changing 20,000 with
{                  //a larger number less than 10,000,000
	int T,n,j,g,f;
	printf("Please enter the no. of test cases\n");
	scanf("%d",&T);       //input no. of test cases
	for(int i=0;i<T;i++)
	{
		for(j=0;j<20000;j++) a[j]=0;
		f=0;
		a[1]=1;
		g=1;
		printf("Please enter the no. whose factorial is to be found\n");
		scanf("%d",&n);          //input the no. whose factorial
		for(j=1;j<=8;j++)        //is required
		{
			a[1]*=j;
			if(j==n) break;
		}
		if(j==9)
		{
			for(f=0;a[g+f]/10>1;)
			{
				f++;
				a[g+f]=a[g+f-1]/10;
				a[g+f-1]=a[g+f-1]%10;
			}
		}
		g+=f;
		for(j=9;j<=n;j++)
		{
			for(int k=1;k<=g;k++)
			{
				a[k]=a[k]*j;
				if(k-3>0)
				{
					a[k]+=a[k-3]/1000;
					a[k-3]=a[k-3]%1000;
					a[k-1]+=a[k-3]/100;
					a[k-3]=a[k-3]%100;
					a[k-2]+=a[k-3]/10;
					a[k-3]=a[k-3]%10;
				}
			}

			a[g]+=a[g-2]/100;
			a[g-2]=a[g-2]%100;
			a[g-1]+=a[g-2]/10;
			a[g-2]=a[g-2]%10;
			
			a[g]+=a[g-1]/10;
			a[g-1]=a[g-1]%10;

			for(f=0;a[g+f]/10>=1;)
			{
				f++;
				a[g+f]=a[g+f-1]/10;
				a[g+f-1]=a[g+f-1]%10;
			}
			g=g+f;
		}
		printf("The answer is\n");
		for(j=g;j>0;j--) printf("%d",a[j]);  //printing the output
			printf("\n");                    //in the form of an array
	}
	return 0;
}