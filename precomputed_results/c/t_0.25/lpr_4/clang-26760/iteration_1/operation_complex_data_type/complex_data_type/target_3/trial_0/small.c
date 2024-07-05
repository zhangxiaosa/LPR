#include <stdio.h>

unsigned int k = 0;

int main() {
  unsigned int j = 0x24F96B7B;

  while (j > 0) {
    k = k >> 1;
    j--;
  }

  return 0;
}