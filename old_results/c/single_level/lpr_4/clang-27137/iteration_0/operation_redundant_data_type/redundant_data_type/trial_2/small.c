#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;

d h;

void fn2(d p1) { h = p1; }

void fn3(d p1) { fn2(p1); }

void fn4(unsigned p1, char *p2, int p3) { fn3(p1); }

b o;
a p;

int main() {
  int t = 0;
  b q;
  b r = o;
  q = r;
  c s = 1L;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  if (p = q)
    ;

  fn4(p, "g_4689", t);
  printf("checksum = %X\n", h);

  return 0;
}