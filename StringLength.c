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

int main() {
  int   index = 0;
  char  word[100];

  // Gets single word as input
  printf("Please enter a word to get its length (< 100 characters): ");
  scanf("%s", word);
 
  // Prints output of stringLength()
  printf("\"%s\" has a length of %d\n", word, stringLength(word));

  return (0);
}