#include <stdio.h>

typedef int c;
typedef unsigned d;

d h;
short o;
char p;

int main() {
  short q;
  int i;
  short r = o;
  q = (short)r;
  c s = 1L;
  for (i = 0; i < 10; i++)
    while (q > (short)s)
      q -= 1;
  if (p = q)
    ;
  h = (unsigned)p;
  printf("checksum = %u\n", h);
  return 0;
}