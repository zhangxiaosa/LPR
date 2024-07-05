#include <stdio.h>

int g;

int fn1() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  unsigned k = g; // o replaced with g
q:
  k = k >> 1;
  if (g) {
    k = k << j;
    goto q;
  }
}

int main() {}
