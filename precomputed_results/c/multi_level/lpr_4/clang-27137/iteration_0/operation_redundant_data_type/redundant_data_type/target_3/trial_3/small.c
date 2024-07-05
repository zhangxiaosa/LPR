#include <stdio.h>

unsigned h;
short h;
char p;

int main() {
  short q;
  int i;
  short r = h;
  q = r;
  int s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p = q)
    ;
  h = p;
  printf("checksum = %u\n", h);
  return 0;
}