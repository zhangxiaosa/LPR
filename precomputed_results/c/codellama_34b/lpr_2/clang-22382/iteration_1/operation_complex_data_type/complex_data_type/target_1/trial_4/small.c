
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct h {
  int i;
  long j;
  int k;
};

int l;

struct h fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
  goto w;
}

int fn2(p1) {
  struct h p;
  fn1(p1, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h h1 = {1, 2, 3};
  struct h h2 = {4, 5, 6};
  struct h h3 = {7, 8, 9};

  fn1(h1, h2, h3);
  fn2(h1);

  return 0;
}
