/* Program to find the square root of a number
 * - the current implementation uses the Newton-Raphson method
 * - mathematical explanation can be found online, and requires basic calculus knowledge
 */

#include <math.h> // for 'fabs' - returns unsigned absolute value
#include <stdio.h>

const double MAX_ERROR = 1e-7; // equivalent to 10^-7 -> accurate upto 7 decimal places
                               // can be set according to need or even taken in as input

double squareRoot(int x)
{
    double r = 1; // initial guess for the root
    while(fabs(r * r - x) > MAX_ERROR)
    {
        r = (r + x / r) / 2;
        // value of 'r' moves closer and closer to the actual root value
    }

    return r;
}

int main(void)
{
    // the number for which we expect to compute the root
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("It's square root is: %lf \n", squareRoot(num));

    return 0;
}
