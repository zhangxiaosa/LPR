#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d f = 0;
a g;

b fn1() {
  a i;
  c j = 0x24F96B7BL;
  e k;

  // Loop unrolling
  if (j >= 3) {
    --j;
    --j;
    --j;
  } else if (j == 2) {
    --j;
    --j;
  } else if (j == 1) {
    --j;
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

int main() {}
