/* bogosort is a sorting algorithm based on the generate and test paradigm. The function successively generates
 * permutations of its input until it finds one that is sorted. It is not considered useful for sorting, but may be
 * used for educational purposes. Do not test it with large arrays */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void bogosort(int * array, size_t size);
bool issorted(const int * array, size_t size);
void randomize(int * array, size_t size);
void printArray(const int * array, size_t size);

int main(void) {
    // example array
    int array[] = {
            3,
            15,
            2,
            10
    };
    int size = sizeof(array) / sizeof( * array);

    srand(time(NULL));

    // prints initial array
    printf("Initial array:");
    printArray(array, size);

    // call function to sort the array
    bogosort(array, size);

    // prints sorted array
    printf("\nSorted array:");
    printArray(array, size);

    return 0;
}

// bogosort
void bogosort(int * array, size_t size) {
    while (!issorted(array, size)) {
        randomize(array, size);
    }
}

// returns true if the array is sorted
bool issorted(const int * array, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) return false;
    }
    return true;
}

// randomize array
void randomize(int * array, size_t size) {
    int temp, random;
    for (int i = 0; i < size; i++) {
        random = (int)((double) rand() / ((double) RAND_MAX + 1) * (double) size);
        temp = array[random];
        array[random] = array[i];
        array[i] = temp;
    }
}

// prints arrays
void printArray(const int * array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
}