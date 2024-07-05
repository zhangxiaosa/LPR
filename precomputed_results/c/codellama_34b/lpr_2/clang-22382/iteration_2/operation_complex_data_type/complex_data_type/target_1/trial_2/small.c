
#include <stdio.h>
#include <stdlib.h>

int i, j, k;

static int fn1(int p1, int p4, int p5) {
  k = p5;
w:;
  goto w;
}

int fn2(int p1) {
  int p, r;
  fn1(p1, 3, p);
  for (;;) {
    r = p;
  }
}

int main() {}
