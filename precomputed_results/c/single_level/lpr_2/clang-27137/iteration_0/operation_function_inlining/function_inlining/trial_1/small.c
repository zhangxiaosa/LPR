#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

void fn1(d p1, int p2) {
  printf("checksum = %X\n", p1);
}

d h;

void fn2(d p1) {
  h = p1;
}

void fn3(d p1) {
  fn2(p1);
}

b o;
a p;

a fn5() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  for (i = 0; i < 10; i++) {
    while (q > s) {
      q -= 1;
    }
  }
  if (p = q) {
    // Do nothing
  }
}

int main() {
  int t = 0;
  fn5();
  {
    d p1 = p;
    char *p2 = "g_4689";
    int p3 = t;
    {
      d p1 = p;
      fn3(p1);
    }
  }
  {
    d p1 = h;
    int p2 = t;
    fn1(p1, p2);
  }
  return 0;
}