// This program will show a segmentation or bus error because we tried to change string literals
// A segmentation fault (aka segfault) is a common condition that causes programs to crash;
// they are often associated with a file named core . Segfaults are caused by a program trying to
// read or write an illegal memory location.

#include <stdio.h>
int
main ()
{

char *cards = "JQK";

char a_card = cards[2];

cards[2] = cards[1];

cards[1] = cards[0];

cards[0] = cards[2];

cards[2] = cards[1];

cards[1] = a_card;

puts (cards);

return 0;

}
