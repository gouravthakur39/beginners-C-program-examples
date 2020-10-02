#include<stdio.h>

int main()
{
    unsigned int i=0,j=0,sum=1,num;
    printf("\nEnter the limit for the series ");
    scanf("%d",&num);
    while(sum<num)
    {
       printf("%d",sum);
        i=j;
        j=sum;
        sum=i+j;
                       
    }
    
   
  getch();   
}

