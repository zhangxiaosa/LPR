#include <stdio.h>

typedef unsigned d;

d h;
short o;
char p;

int main() {
  short q;
  int i;
  short r = o;
  q = r;
  int s = 1L;
  for (i = 0; i < 10; i++)
    while (q > (int)s)
      q -= 1;
  if (p = (char)q)
    ;
  h = (d)p;
  printf("checksum = %X\n", h);
  return 0;
}