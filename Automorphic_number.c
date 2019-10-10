#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
  int num, sqr, temp, last;
  int n = 0;
  printf("Enter a number \n");
  scanf("%d", & num);
  sqr = num * num; //calculating square of num
  temp = num;
  //Counting number of digits
  while (temp > 0) {
    n++;
    temp = temp / 10;
  }
  //Extracting last n digits
  int den = floor(pow(10, n));
  last = sqr % den;
  if (last == num)
    printf("Automorphic number \n");
  else
    printf("Not Automorphic \n");
  return 0;
}
