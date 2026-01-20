#include <stdio.h>

// Program to count vowels in a string
int main() {
  char str[100];
  int i, count = 0;

  // Ask the user to enter a string
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // safer input method than gets()

  // Loop through the string
  for (i = 0; str[i] != '\0'; i++) {
    // Check for both uppercase and lowercase vowels
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      count++;
    }
  }

  // Display the total number of vowels
  printf("Number of vowels: %d\n", count);

  return 0;
}
