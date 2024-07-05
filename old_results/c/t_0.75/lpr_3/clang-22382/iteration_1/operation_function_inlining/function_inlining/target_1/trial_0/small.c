#include<stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  p.k;
w:
  goto w;
  for (;;) {
    p = p;
  }
}

int main() {}
