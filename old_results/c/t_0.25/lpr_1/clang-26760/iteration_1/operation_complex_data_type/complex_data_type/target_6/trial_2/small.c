#include <stdio.h>

int f;
signed int g;

int main() {
  int j = 0x24F96B7B;
  unsigned int k = 0;
  unsigned int p = g;

  while (p) {
    k >>= 1;
    if (p)
      k <<= j;
  }
}