#include<stdio.h>
void main()
{ int a,b;
printf("Enter two Numbers : ");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swap is %d %d",a,b);
}
