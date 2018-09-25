// Swap two integers using third variable


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two no :\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping value of a = %d\n b =%d",a,b);
    return 0;
}
