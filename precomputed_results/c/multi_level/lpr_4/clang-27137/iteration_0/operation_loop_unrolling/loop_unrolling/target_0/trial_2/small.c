#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;

d h;
b o;
a p;

int main() {
  b q;
  c s = 1L;

  b r = o;
  q = r;

  q -= 10;

  if (p = q)
    ;

  h = p;
  printf("checksum = %X\n", h);
  return 0;
}
