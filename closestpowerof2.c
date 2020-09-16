//Program for printing closest of 2 of a number.

#include<stdio.h>
#include<math.h>

int main()
{
    int num,a,b,c,d=0;
    scanf("%d",&num);
    for(b=31;b>=0;--b)
    {
        c=num>>b;
        if(c&1)
        {
            d++;
            if(d>1)
            {
                num=num-pow(2,b);
            }
        }
    }
    printf("%d",num);
    return 0;
}
//not working for negative no.
