// Very tiny and stupid Calculator using switch case
//Answer will be 0 in case 4 if quotients value is in points.
//For instance, 5/3 will be shown as 0. This is because we have declared c as integer and not float.

#include <stdio.h>
  int main() {
    int a, b, c;
    char ch;
    printf("enter two number\n");
    scanf("%d%d", & a, & b);
    fflush(stdin);
    //flush the input buffer. You might use this function if you think that there might be
    //some data in input buffer which can create problems for you while taking user inputs from stdin.
    printf("enter your choice\n");
    printf("1. enter 1 for addition\n");
    printf("2. enter 2 for subtraction\n");
    printf("3. enter 3 for multiplication\n");
    printf("4. Enter 4 for division\n");
    printf("5. enter 5 for modulo division\n");
    scanf("%c", & ch);
    switch (ch) {
    case '1':
      c = a + b;
      break;
    case '2':
      c = a - b;
      break;
    case '3':
      c = a * b;
      break;
    case '4':
      c = a / b;
      break;
    case '5':
      c = a % b; //Modulus division only works with integers.
      break;
    default:
      printf("wrong choice");
    }
    printf("calculated value=%d", c);

    return 0;
  }
