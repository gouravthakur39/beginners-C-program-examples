#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of elements in an arrays\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements of 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of 2nd array\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("The common numbers are: ");
   for(i=0; i<n; i++){
	   for(j=0;j<n;j++){
		   if(a[i]==b[j]){
			   printf("%d\n", b[j]);
			   }
		   }
    }
}
