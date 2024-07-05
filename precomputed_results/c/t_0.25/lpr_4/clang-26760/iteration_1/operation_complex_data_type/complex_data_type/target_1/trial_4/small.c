#include <stdio.h>

int main() {
  int i = 0;
  unsigned int k = 0;

  q:
  k = k >> 1;

  if (i) {
    k = k << 1;
    goto q;
  }

  return 0;
}