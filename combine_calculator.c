// add a program for a calculator in C
#include<stdio.h>
#include <math.h>
void Input(){
printf("Type number to choose the algorithm\n");
printf( " 1. + \n 2. - \n 3. *\n 4. / \n 5. ^ \n 6. square \n ");
printf("7. log \n 8.floor \n 9. ceil \n 10.Exit\n InputNum: ");
}
 int main()
{
   int InputNum=0;
   float a=0;
   float b=0;
   float result=0;
 do{
    Input();
    scanf("%d", &InputNum);
    switch(InputNum){
   case(1):
       printf("Enter First Number: ");
       scanf("%f", &a);
       printf("Enter Second Number: ");
       scanf("%f", &b);
       result = a + b;
       printf("%.2f + %.2f = %.2f\n",a , b, result);
       break;
   case(2):
       printf("Enter First Number: ");
       scanf("%f", &a);
       printf("Enter Second Number: ");
       scanf("%f", &b);
       result = a - b;
       printf("%.2f - %.2f = %.2f\n",a ,b, result);
       break;
   case(3):
       printf("Enter First Number: ");
       scanf("%f", &a);
       printf("Enter Second Number: ");
       scanf("%f", &b);
       result = a * b;
       printf("%.2f * %.2f = %.2f\n",a ,b, result);
       break;
   case(4):
       printf("Enter Dividend: ");
       scanf("%f", &a);
       printf("Enter Divisor: ");
       scanf("%f", &b);
       if (b == 0){
            printf("Please check the divisor that can not be zero.\n");
       }
 else{
           result = a / b;
           printf("%.2f / %.2f = %.2f\n",a ,b, result);
       }
       break;
   case(5):
        printf("Enter the number ");
        scanf("%f",&a);
        printf("Enter the second number ");
        scanf("%f",&b);
        printf("first number to the power of second number is %.2f \n ",pow(a,b));
        break;
   case(6):
       printf("Enter the radicand ");
        scanf("%f",&a);
        printf("square root is %.2f \n",sqrt(a));
        break;

 case(7):
       printf("Enter the log ");
        scanf("%f",&a);
        printf("the log is %.2f \n",log(a));
        break;
case(8):
       printf("Enter the number ");
        scanf("%f",&a);
        printf("the float is %.2f \n",floor(a));
        break;
case(9):
       printf("Enter the number ");
        scanf("%f",&a);
        printf("the ceil is %.2f \n",ceil(a));
        break;

   case(10):
       printf("Thank you for using code !!\n");
       break;

    default:
       printf("Invalid number, please choose again.\n");
   }
 }while(InputNum);
   return 0;
}

