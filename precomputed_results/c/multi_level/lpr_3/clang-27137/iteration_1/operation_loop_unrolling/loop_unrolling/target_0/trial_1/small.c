#include <stdio.h>

typedef short b;
typedef unsigned d;
d h;
b o;

int main() {
  b q = o;
  while (q > 1) {
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
  }
  h = q;
  printf("checksum = %X\n", h);
  return 0;
}
