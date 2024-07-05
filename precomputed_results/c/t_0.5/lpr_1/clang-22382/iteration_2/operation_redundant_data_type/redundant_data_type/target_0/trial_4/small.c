#include <stdio.h>

static int fn1();

unsigned fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r;
    p = r = p;
  }
}

int fn1(int p5) {
  p5;
w:;
  goto w;
}

int main() {}
