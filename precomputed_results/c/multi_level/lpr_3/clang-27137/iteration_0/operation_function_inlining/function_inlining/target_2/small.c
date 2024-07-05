#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d h;
b o;

int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (q)
    ;
  h = q;

  printf("checksum = %X\n", h);
  return 0;
}