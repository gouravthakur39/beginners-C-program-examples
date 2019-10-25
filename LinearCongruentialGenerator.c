// A basic implementation of a linear congruential pseudorandom number generator in C

#include <stdio.h>
#include <time.h>
#include <math.h>

struct lcg_rand {
  unsigned int modulus;
  unsigned int multiplier;
  unsigned int increment;
  unsigned int seed;
  unsigned int last;
};

struct lcg_rand new_generator(unsigned int modulus, unsigned int multiplier, unsigned int increment) {
  struct lcg_rand random;
  random.modulus = modulus;
  random.multiplier = multiplier;
  random.increment = increment;
  random.seed = time(NULL);
  random.last = random.seed;
  return random;
}

int random(struct lcg_rand * random) {
  int number = ((random->multiplier * random->last) + random->increment) % random->modulus;
  random->last = number;
  return number;
}

int main() {
  struct lcg_rand rng = new_generator(pow(2, 31), 1103515245, 12345);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", random( & rng));
  }
  return 0;
}
