/*
 * The Caesar's cipher is the "Hello World" of cryptography.
 * It's a very simple encryption algorithm which maps every char to another
 * based on some key.
 * 
 * Let's say we pick the number 3 as the key. It means that for each character we shift it
 * 3 letters. To encrypt it shift to the right and to decrypt shift to the left. 
 * 
 * So, encryption is as simple as making A => D, B => E, C => F and so on.
 * 
 * To decrypt we make the reverse, so D => A, E => B, F => C, etc.
 * 
 * More info at <https://en.wikipedia.org/wiki/Caesar_cipher>
 * 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char lowerCaseShift(char ch, int shiftsCount)
{
    if (shiftsCount > 0) // Shift to the right
    {
        int shiftsLeft = shiftsCount;
        while (shiftsLeft) // If there is still some shifts to be done
        {
            // If the number of shifts is bigger than the number of letters left
            // in the alphabet
            // e.g.: if we are at X and need to shift by 3, should get to A
            int hasOverflow = shiftsLeft > 'z' - ch;
            if (hasOverflow)
            {
                char shiftsDone = 'z' - ch;
                shiftsLeft -= shiftsDone;
                ch = 'a';
            }
            else
            {
                ch += shiftsCount;
                return ch;
            }
        }
    }
    else if (shiftsCount < 0) // Shift to the left
    {
        int shiftsLeft = shiftsCount * -1;
        while (shiftsLeft) // If there is still some shifts to be done
        {
            // If the number of shifts is bigger than the number of letters left
            // in the alphabet
            // e.g.: if we are at C and need to shift by 3, should get to Z
            int hasOverflow = shiftsLeft > ch - 'a';
            if (hasOverflow)
            {
                char shiftsDone = ch - 'a';
                shiftsLeft -= shiftsDone;
                ch = 'z';
            }
            else
            {
                ch += shiftsCount;
                return ch;
            }
        }
    }
}

char upperCaseShift(char ch, int shiftsCount)
{
    // We make the uppercase letter be lowercase such that we can
    // reuse the lowerCaseShift function
    char chLowerCase = tolower(ch);
    char chLowerCaseWithShift = lowerCaseShift(chLowerCase, shiftsCount);
    // And then make it upperCase again
    return toupper(chLowerCaseWithShift);
}

void ceaserCipher(char *message, int shiftsCount)
{
    const size_t length = strlen(message);
    for (int i = 0; i < length; ++i) // For each character
    {
        const char ch = message[i];
        if (isupper(ch)) // If it's uppercase
        {
            message[i] = upperCaseShift(ch, shiftsCount); // shift it
        }
        else if (islower(ch)) // If it's lowercase
        {
            message[i] = lowerCaseShift(ch, shiftsCount); // shift it
        }
    }
}

int main()
{
    char message[] = "Hello World";
    int shiftCount = 3;

    printf("Your message is: %s\n", message);
    ceaserCipher(message, shiftCount);
    printf("Your encoded message is: %s\n", message);
    ceaserCipher(message, -shiftCount);
    printf("Your decoded message is: %s\n", message);
    return 0;
}
