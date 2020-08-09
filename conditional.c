#include <stdio.h>

/*
 * conditional.c
 *
 * A C File showcasing the Ternary Operator and Conditionals in the C Language.
 *
 * File provided by D-R-S
*/

int main(void) {
     int a = 15;
     int b = 20;
     int Highest;

     // Compare a to b.
     /* NOTE 
     *  ----
     * Conditionals function similary to If-(else) Statements. They compare to 
     * things together and at the sametime, make your Code more compact.
     * But, you shouldn't really use them(Or even have to), use them all
     * the time. If you're going to be comparing more than 2 things, an If-else
     * Statement would be best.
     */
     Highest = (a > b) ? a : b;
     
     // Print the Value of the Integer that was assigned to Highest.
     printf("%d", Highest);

     return 0;
}
