#include<stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1(int p5) {
  p5;
  w:
  goto w;
}

int fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r1;
    p = r1 = p;
  }
}

int main() {}
