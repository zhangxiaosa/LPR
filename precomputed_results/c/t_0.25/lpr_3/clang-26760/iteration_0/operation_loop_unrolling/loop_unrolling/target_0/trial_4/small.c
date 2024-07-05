#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d f;
a g;

int main() {
  a i;
  c j = 0x24F96B7BL;
  e k;

  for (f = 0;;) {
    for (; j >= 4; j -= 4) {
      // Unrolled loop body
      // Original loop body (1st iteration)
      // Original loop body (2nd iteration)
      // Original loop body (3rd iteration)
      // Original loop body (4th iteration)
    }

    for (; j; --j) {
      // Original loop body
    }

    c l = 1L;
    c m = j;
    a n = g;
    c o = n;
    e p = o;

  q:;
    k = k >> l;
    i = p;
    if (i) {
      k = k << m;
      goto q;
    }
  }
}