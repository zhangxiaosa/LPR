#include <stdio.h>

typedef char a;
typedef int b;
typedef unsigned c;

a fn1(a p1, a p2) { return p1 * p2; }

struct g {
  signed h;
};

b i;
struct g j;

b *fn2(c p1, b *p2, a p3) {
  fn1(p3, i) && 1L;
  p3--;
  fn1(p3, i) && 1L;
  p3--;

  return p2;
}

int main() { return 0; }
