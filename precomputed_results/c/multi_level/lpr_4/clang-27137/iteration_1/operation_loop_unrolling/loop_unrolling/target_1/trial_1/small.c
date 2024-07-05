#include <stdio.h>

unsigned h;
short o;
char p;

int main() {
  short q;
  int i;

  q = o;
  int s = 1L;

  // Unrolled loop
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  if (p = q)
    ;
  h = p;
  printf("checksum = %X\n", h);
  return 0;
}
