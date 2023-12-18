#include <stdio.h>

char p = 0;

int main() {
  short q;
  int i;
  short r = 0;
  q = r;
  int s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p == q)
    ;
  printf("checksum = %hhX\n", p);
  return 0;
}