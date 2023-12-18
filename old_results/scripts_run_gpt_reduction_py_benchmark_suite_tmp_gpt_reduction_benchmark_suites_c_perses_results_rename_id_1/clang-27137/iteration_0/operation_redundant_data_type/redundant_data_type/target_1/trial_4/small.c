#include <stdio.h>

typedef int c;
typedef unsigned d;

void fn1(d p1, int p2) { printf("checksum = %X\n", p1); }

short o;
char p;

int main() {
  int i;
  short r = o;
  c s = 1L;

  for (i = 0; i < 10; i++)
    while (r > s)
      r -= 1;

  if (p = r)
    ;

  fn1(p, 0);

  return 0;
}