#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
signed g;

int main() {
  c j = 0x24F96B7BL;
  e k;

  for (f = 0; j >= 4; j -= 4) {
    // Unrolled loop body
    ;
    ;
    ;
    ;
  }

  // Handle remaining iterations
  for (; j; --j)
    ;

  c l = 1L;
  e p = g;

  while (p) {
    k = k >> l;
    if (p)
      k = k << j;
  }
}
