#include<stdio.h>
void main()
{ 
int i,n,c=0;
printf("Enter a Number : ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
  if(n%i==0)
  {
    printf("NOT a prime number");
    c++;
    break;
  }
}
if(c==0)
printf("%d is a prime number",n);
}
