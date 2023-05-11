/* A C-Program that Increments a Number */

#include <stdio.h>
#include <unistd.h> // This Header is used so we can gain access to the sleep() Function

int main(void) {
    int num = 0; // This is the Number that will be incremented.
    int increment = 1; // This is what we'll be using to increment(add) onto num.
    
    // While num's Value is less than 100, we'll increment the Value of num by 1 every second.
    while(num < 100) {
        sleep(1); // Wait 1 second each time, num has it's Value incremented
        num += increment; // Increment num
        printf("%d\n", num); // Print the current Value of num
    }

    return 0;
}
