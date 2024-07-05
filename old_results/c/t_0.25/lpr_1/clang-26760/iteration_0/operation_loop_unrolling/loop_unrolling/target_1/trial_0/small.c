#include <iostream>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d f;
a g;

int main() {
  c j = 0x24F96B7BL;
  e k;
  
  // Loop unrolling optimization
  // for (f = 0; f;) { ... }
  
  c l = 1L;
  e p = g;
  
  while (p) {
    k = k >> l;
    if (p)
      k = k << j;
  }
}