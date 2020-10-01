#include<stdio.h>
main()
{
    int principleAmount;
    int numberOfYears;
    int rateOfInterest;
    int SimpleInterest;
    printf("enter principleAmount\n",principleAmount);
    scanf("%d",&principleAmount);
    printf("enter number of year\n",numberOfYears);
    scanf("%d",&numberOfYears);
    printf("enter rate of interest\n",rateOfInterest);
    scanf("%d",&rateOfInterest);

    SimpleInterest=(principleAmount*numberOfYears*rateOfInterest)/100;
    printf("Simple interest is %d",SimpleInterest);


}
