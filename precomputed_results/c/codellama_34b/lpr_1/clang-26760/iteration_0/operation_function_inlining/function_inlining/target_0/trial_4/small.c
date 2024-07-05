
#include <stdio.h>
#include <stdint.h>

// Defining the types
typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

// Defining the variables
d f;
a g;

// Inlining fn1 in main
int main() {
  a i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; f;)
    for (; j; --j)
      ;
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
  printf("%d\n", k);
  return 0;
}
