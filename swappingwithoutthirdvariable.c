//Swap Values Without using Third Variable.
#include<stdio.h>
int main()
{
    int a,b;  /*declaration of variables*/
    printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b); /*Taking input of Two Variables*/
    b = a + b - (a = b);    /*  firstly a is assigned with b in "(a = b)" ,
                            and then it becomes "a + b - b" ==> "a" , i.e, "b = a + b - b " 
                            finally left-side b assigned with a , "b = a"
                            Hence they get swapped!
                         */
    printf("the number after swapping are %d %d\n",a,b);/*printing*/
    return 0;
}
