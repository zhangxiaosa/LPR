#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
a g;

b fn1() {
  c j = 0x24F96B7B;
  unsigned k;

  // Loop unrolling
  --j;
  --j;
  --j;
  --j;

  c m = j - 4;

q:
  k = k >> 1L;

  if (g) {
    k = k << m;
    goto q;
  }
}

int main() {}
