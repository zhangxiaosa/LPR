#include <stdio.h>

int g;

int fn1() {
  int j = 0x24F96B7BL;
  unsigned k;
  int m = j;
  int p = g;

  k = k >> 1L;
  if (p) {
    k = k << m;

    // Loop removed since p is constant within the loop
  }
}

int main() {}
