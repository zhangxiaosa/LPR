#include <stdio.h>

typedef signed a;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

int main() {
  a i;
  int j = 0x24F96B7B;
  e k;

  j = j % 4;
  for (; j >= 4; j -= 4) {
    // Loop body (unrolled version)
    ;
    ;
    ;
    ;
  }

  switch (j) {
    case 3:
      // Loop body (iteration 3)
      ;
    case 2:
      // Loop body (iteration 2)
      ;
    case 1:
      // Loop body (iteration 1)
      ;
  }

  int l = 1;
  int m = j;
  a n = g;
  int o = n;
  e p = o;

  while (1) {
    k = k >> l;
    i = p;
    if (i) {
      k = k << m;
      continue;
    }
    break;
  }

  return 0;
}