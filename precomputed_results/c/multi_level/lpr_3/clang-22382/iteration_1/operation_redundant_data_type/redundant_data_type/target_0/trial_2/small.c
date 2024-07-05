#include <stdio.h>

int i;
long j;
unsigned k;

static int fn1(int p5) {
  int p5_k = p5.k;
  w:
    goto w;
}

int fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r;
    p = r = p;
  }
}

int main() {}
