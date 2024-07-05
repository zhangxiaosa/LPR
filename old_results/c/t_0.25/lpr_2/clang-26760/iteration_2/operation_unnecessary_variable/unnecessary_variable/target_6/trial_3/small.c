#include <stdio.h>

unsigned f;
signed g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;

  for (f = 0u; f;)
    for (; j; --j)
      ;

  k = g;

  k = k >> 1;
  k = k << 0;

  return 0;
}