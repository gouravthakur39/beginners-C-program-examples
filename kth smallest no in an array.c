#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int f,int m,int l)
{
    int n1=m+1-f;
    int n2=l-m;
    int t1[n1],t2[n2];
    for (int i = 0; i<n1; i++) 
        t1[i]=a[f+i]; 
    for (int j = 0; j<n2; j++) 
        t2[j]=a[m+1+j]; 
    int i=0,j=0,k=f;
    while(i<n1 && j<n2)
    {
        if(t1[i]>t2[j])
        {
            a[k]=t2[j];
            j++;
        }
        else
        {
            a[k]=t1[i];
            i++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=t1[i];
        i++;k++;
    }
    while(j<n2)
    {
        a[k]=t2[j];
        j++;k++;
    }
}

void sort(int a[],int f,int l)
{
    if(f<l)
    {
        int m=(f+l)/2;
        sort(a,f,m);
        sort(a,m+1,l);
        
        merge(a,f,m,l);
    }
}
int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
	    int num;scanf("%d",&num);
	    /*int *a;
	    a=(int *)malloc(num*sizeof(int));*/
	    int a[num];
	    for(int i=0;i<num;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int r;scanf("%d",&r);
	    sort(a,0,num-1);
	    printf("%d\n",a[r-1]);
	    
	}
}
