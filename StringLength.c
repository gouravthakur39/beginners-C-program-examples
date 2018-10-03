// Implementation of the strlen function (for standard C strings)

#include <stdio.h>

int stringLength(char * word) {
    int count = 0;

    // Increment our counter until NULL TERMINATOR is found
    while (word[count] != '\0') {
      count++;
    }
    return (count);
}

int main(int argc, char ** argv) {
  int index = 0;

  // Check for valid input and state usage if there are no arguments
  if (argc < 2)
    printf("Usage: Enter one, or multiple words as command line arguments to get their lengths - separated by spaces.\n");

  // Loops through array of strings entered as command line arguments
  while (++index < argc) {
    printf("\"%s\" has a length of %d\n", argv[index], stringLength(argv[index]));
  }
  return (0);
}