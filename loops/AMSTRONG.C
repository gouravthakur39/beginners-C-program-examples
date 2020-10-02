#include<stdio.h>
#include<conio.h>
main()
{
int number, temp, digit1, digit2, digit3;
clrscr();
printf("Printing all Armstrong numbers between 1 and 500:\n");

number = 1;

while (number <= 500)
{
digit1 = number - ((number / 10) * 10);

digit2 = (number / 10) - ((number / 100) * 10);

digit3 = (number / 100) - ((number / 1000) * 10);

temp = (digit1*digit1*digit1) + (digit2*digit2*digit2) + (digit3*digit3*digit3);

if (temp == number)
{
printf("\nAmstrong Number:%d", temp);

}

number++;
}
getch();
}
