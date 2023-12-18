#include <stdio.h>

unsigned int g = 0;
unsigned int j = 0x24F96B7B;
unsigned int k = 0;

if (j) {
  --j;
}

while (g) {
  k >>= 1;

  if (j) {
    k <<= j;
  }
}