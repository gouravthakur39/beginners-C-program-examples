#include<stdio.h>
void main()
{
    int i;//loop counter
    int n;//max value
    int t1=1;//First term
    int t2=1;//Second term
    int nextTerm;//Next term
    int sum=0;//Summation of total even Fibonacci number
    int count=0;//counter to count the number of even Fibonacci numbers
    printf("Enter the max value up to which you want to print the values: ");
    scanf("%d",&n);
    printf("The listed even Fibonacci number are: ");
    printf("\nSlno.\t\tFibonacci number");
    for(i=1;i<=n;i++)
    {
        if(t1>=1 && t1<=n)
        {
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;

                if(t1%2==0 && t1<=n)
                {
                    sum=sum+t1;
                    count++;
                    printf("\n %d\t\t\t%d",count,t1);
                }
        }

    }
    printf("\n\nThe required sum of the total even Fibonacci number is: %u\n\n\n",sum);

}
