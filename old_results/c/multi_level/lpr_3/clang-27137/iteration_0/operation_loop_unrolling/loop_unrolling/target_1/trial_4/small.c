#include <stdio.h>

typedef short b;
typedef int c;
typedef unsigned d;
d h;
b o;

int main() {
  b q;
  int i;
  b r = o;

  q = r;
  c s = 1L;
  
  q = s;

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}
