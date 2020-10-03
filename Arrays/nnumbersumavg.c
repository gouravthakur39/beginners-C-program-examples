#include<stdio.h>
main()
{
   int x[10],sum=0,i;
   float avg;
   printf("Enter the array numbers:\n");
   for(i=0;i<10;i++)
   {
       scanf("%d",&x[i]);
       sum+=x[i];
   }
   avg=sum/10;
   printf("The sum is %d and average is %f.\n",sum,avg);
}
