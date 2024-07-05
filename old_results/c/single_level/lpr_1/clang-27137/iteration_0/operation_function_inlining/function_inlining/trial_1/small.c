#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d h;
b o;
a p;

void fn1(d p1, int p2) {
  printf("checksum = %X\n", p1);
}

void fn2(p1) { h = p1; }

void fn3(p1) { fn2(p1); }

a fn5() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p = q)
    ;
}

int main() {
  int t = 0;
  fn5();
  {
    d p1 = p;
    char *p2 = "g_4689";
    int p3 = t;
    fn3(p1);
  }
  {
    d p1 = h;
    int p2 = t;
    printf("checksum = %X\n", p1);
  }
  return 0;
}
