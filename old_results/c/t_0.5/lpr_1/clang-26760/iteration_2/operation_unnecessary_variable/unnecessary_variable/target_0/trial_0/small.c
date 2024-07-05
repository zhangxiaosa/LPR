#include <stdio.h>

unsigned g;

int main() {
  int j = 0;
  unsigned k;
  if (j)
    --j;
  while (g) {
    k = k >> 1L;
    if (g)
      k = k << j;
  }
}