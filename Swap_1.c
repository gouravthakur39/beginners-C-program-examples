#include<stdio.h>
void main()
{ int a,b,t;
printf("Enter two Numbers : ");
scanf("%d %d",&a,&b);
t=b;
b=a;
a=t;
printf("Swap is %d %d",a,b);
}
