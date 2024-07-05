#include <stdio.h>

short fn1() {
  short n = g;
  int j = 0x24F96B7B;
  unsigned int k = 0;

  if (j != 0)
    j--;

  while (n != 0) {
    k >>= 1;

    if (j > 0)
      k <<= j;

    n--;
  }

  return k;
}

int main() {}
