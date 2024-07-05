#include <stdio.h>

int g;

short fn1() {
  int n = g;
  short j = 0x24F96B7BL;
  if (j)
    --j;
q:
  if (n) {
    j = j << 1;
    goto q;
  }
}

int main() {}
