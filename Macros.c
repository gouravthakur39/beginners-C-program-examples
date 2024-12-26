#include<stdio.h>
#define BRO "Homie"
#define FACT(n) for(i=1;i<=n;i++) \
                f*=i; \
                printf("Factorial is %d\n",f);
int main()
{
    int a,n,f=1,i;
    float b=592580.7907;
    printf("Hi Bro!\n");
    scanf("%d",&a);
    printf("%d\n",a);
    printf("%.2f\n",b);
    #ifdef BRO
    //#ifndef BRO
    printf("%s\n",BRO);  
    //#error Something went wrong!
    #endif
    #if defined FACT
    printf("Enter number for Factorial\n");
    #endif
    scanf("%d",&n);
    FACT(n);
    return 0;
}
