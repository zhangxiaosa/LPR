#include <stdio.h>

signed int g;

int main() {
  int j = 0x24F96B7B;
  unsigned int k;
  int m = j;
  while (k) {
    k = k >> 1;
    if (k)
      k = k << m;
  }
}