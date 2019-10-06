//Swap Values Without using Third Variable.
#include<stdio.h>
int main()
{
    int a,b;  /*declaration of variables*/
    printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b); /*Taking input of Two Variables*/
    a=a+b; /*swapping */
    b=a-b; /* the two */
    a=a-b; /*numbers*/
    printf("the number after swapping are %d %d\n",a,b);/*printing*/
    return 0;
}