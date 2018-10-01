// Program to find the daily wages of a worker according to the following
// conditions using ladder else if statement
// Given below is the Pay according to hour
// ---------------------------------------------------------------------
// Duty in hours            Amount in rupees
// ----------------------------------------
// Within first 8 hours     100 Rupees
// Next 4 hours	            20 Rupees/hour
// Next 4 hours	            40 Rupees/hour
// Next 4 hours	            60 Rupees/hour
// Next 4 hours	            80 Rupees/hour
//-----------------------------------------------------------------------

#include<stdio.h>
int main(){
    int hour, amount;
    printf("Enter number of duty hours\n");
    scanf("%d", &hour);
    if (hour >= 1 && hour <= 8)
        amount = 100;
    else if (hour >= 9 && hour <= 12)
        amount = 100 + (hour - 8)*20;
    else if (hour >= 13 && hour <= 16)
        amount = 180 + (hour - 12)*40;
    else if (hour >= 17 && hour <= 20)
        amount = 340 + (hour - 16)*60;
    else if (hour >= 21 && hour <= 24)
        amount = 580 + (hour - 20)*80;
    printf("Amount incurred by worker : %d", amount);
    return 0;

}
