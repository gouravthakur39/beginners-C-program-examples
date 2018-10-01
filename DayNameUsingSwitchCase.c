// Program to display the day name using switch case
#include <stdio.h>
int main(){
    int day;
    printf("Enter the day number\n");
    scanf("%d", &day);

    switch(day)
    {
    case 1 :
        printf("Day is Monday");
        break;
    case 2 :
        printf("Day is Tuesday");
        break;
    case 3 :
        printf("Day is Wednesday");
        break;
    case 4 :
        printf("Day is Thrusday");
        break;
    case 5 :
        printf("Day is Friday");
        break;
    case 6 :
        printf("Day is Saturday");
        break;
    case 7 :
        printf("Day is Sunday");
        break;
    default:
        printf("Wrong choice");
    }

    return 0;
}
