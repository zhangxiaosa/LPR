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

  for (f = 0; j >= 4; j -= 4) {
    // Unrolled iteration 1
    ;
    // Unrolled iteration 2
    ;
    // Unrolled iteration 3
    ;
    // Unrolled iteration 4
    ;
  }

  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;

q:
  k = k >> l;
  i = p;

  if (i) {
    k = k << m;
    goto q;
  }
}
