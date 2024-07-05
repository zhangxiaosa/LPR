#include <stdio.h>

short o;
char p;

int main() {
  short q;
  int i;
  q = o;
  int s = 1L;

  for (int j = 0; j < 10; j++)
    while (q > s)
      q -= 1;

  if (p = q)
    ;

  o = p;
  printf("checksum = %X\n", o);
  return 0;
}