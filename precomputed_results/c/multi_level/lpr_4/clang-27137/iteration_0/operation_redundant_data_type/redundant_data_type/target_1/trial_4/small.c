#include <stdio.h>

typedef short original_b;
typedef int c;
typedef unsigned d;

d h;
original_b o;
char p;

int main() {
  original_b q;
  int i;
  original_b r = o;
  q = r;
  c s = 1L;
  for (i = 0; i < 10; i++) {
    while (q > (original_b)s) {
      q -= 1;
    }
  }
  if (p = (char)q) {
    ;
  }
  h = (d)p;
  printf("checksum = %X\n", h);
  return 0;
}