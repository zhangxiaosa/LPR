
#include <stdio.h>
#include <stdint.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d f;
a g;

b fn1() {
  c j = 0x24F96B7BL;
  e k = j;
  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
  return k;
}

int main() {
  fn1();
  return 0;
}
