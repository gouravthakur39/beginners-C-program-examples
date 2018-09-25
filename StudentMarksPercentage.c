// Evaluate total, average and percentage of a student

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float total,average,percentage;
    printf("Enter marks of 5 subjects : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total  = a+b+c+d+e;
    average = total/5;
    percentage  = (total/500)*100;
    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n",average );
    printf("Net percentage = %f\n",percentage);
    return 0;

}
