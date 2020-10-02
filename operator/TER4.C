#include<stdio.h>
#include<conio.h>

void main()
{
int age;
char gen;
clrscr();
printf("enter the gender & age of a person\n");
scanf("\n%c%d",&gen,&age);
gen=='m'|| gen=='M'?age>=21?printf("he is eligible for voting\n"):printf(" he is not eligible for voting\n"):
gen=='f'|| gen=='F'?age>=18?printf(" she is eligible for voting\n"):printf(" she is not eligible for voting\n"):
printf("you have entered a wrong choice\n");
getch();
}
