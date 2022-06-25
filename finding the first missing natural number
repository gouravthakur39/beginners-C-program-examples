#include<stdio.h>
#include<conio.h>
int main()
{ int a,k=1,i,c,d,n,arr[10];

printf("Enter the no of elements:\n");
scanf("%d",&n);
for(a=0;a<n;a++)
{
printf("Enter %d: \n",a+1);
scanf("%d",&arr[a]);
}
for(d=0;d<n;d++)
{ i=0;
for(c=0;c<n;c++)
{
if(arr[c]==d+1)
{  i=1;
}
}
if(i==0)
{printf("Missing %d ",d+1);
k=0;
break;
}
}
if(k==1)
{  printf("Missing %d", d+1);
}
return 0;
getch();
}
