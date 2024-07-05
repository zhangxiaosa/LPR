#include <stdio.h>

unsigned h;
short o;
char p;

int main() {
  short q;
  int i;

  q = o; // Replaced 'r' with 'o'

  int s = 1L;
  for (i = 0; i < 10; i++) {
    while (q > s)
      q -= 1;
  }

  if (p = q) // No change to this line
    ;

  h = p;
  printf("checksum = %X\n", h);
  return 0;
}