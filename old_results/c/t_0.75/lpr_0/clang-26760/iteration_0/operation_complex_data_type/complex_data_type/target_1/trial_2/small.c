#include <stdio.h>

unsigned g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k = 0;
  signed n = g;
  int o = n;

  while (1) {
    k >>= 1;
    i = o;
    if (i == 0) {
      break;
    }
    k <<= j;
  }

  return 0;
}