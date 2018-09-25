// A simple arithmetic operation on two integers

#include<stdio.h>
int main()
{
    int n1,n2,a,s,m,d,md;
    printf("Enter two numbers :\n");
    scanf("%d%d",&n1,&n2);
    a = n1+n2;
    s = n1-n2;
    m = n1*n2;
    d = n1/n2;
    md = n1%n2;
    printf("Addition of n1 and n2 : %d\n",a);
    printf("Subtraction of n1 and n2 : %d\n",s);
    printf("Multiplication of n1 and n2 : %d\n",m);
    printf("Division of n1 and n2 : %d\n",d);
    printf("Modulo of n1 and n2 : %d\n",md);
    return 0;

}
