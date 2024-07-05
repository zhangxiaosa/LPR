#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
b o;
a p;

int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;

  // Loop unrolling (3 iterations):
  q -= 1;
  q -= 1;
  q -= 1;

  if (p = q)
    ;

  printf("checksum = %X\n", p);
  return 0;
}