#include <stdio.h>

int main() {
  unsigned int k = 0;

  q:
  k = k >> 1;

  if (k) {
    goto q;
  }

  return 0;
}