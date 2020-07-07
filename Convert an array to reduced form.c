#include<stdio.h>
int main()
{
	int num;scanf("%d",&num);
	while(num--)
	{
	    int n;scanf("%d",&n);
	    int a[n],t[n],tmp,k=0;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        t[i]=a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n-i-1;j++)
	            if(t[j]>t[j+1])
	            {
	                tmp=t[j];
	                t[j]=t[j+1];
	                t[j+1]=tmp;
	            }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        if(t[i]==a[j])
	        {
	            a[j]=k++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    printf("%d ",a[i]);
	    printf("\n");
	}
}
