//Program to Calculate Simple Interest
#include<stdio.h>

#include<conio.h>

void main() {
  float P, R, T, SI;
  scanf("%f%f%f", & P, & R, & T);
  SI = (P * R * T) / 100;
  printf("%f", SI);
  getch();
}
