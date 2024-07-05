#include <stdio.h>

char p;

int main() {
  short q;
  int i;
  int r = 0;
  q = (short)r;
  short s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p = (char)q)
    ;
  printf("checksum = %hhX\n", p);
  return 0;
}