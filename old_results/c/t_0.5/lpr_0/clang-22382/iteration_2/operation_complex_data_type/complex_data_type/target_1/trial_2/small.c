#include<stdio.h>

signed i;
long j;
unsigned k;

static struct {
  signed i;
  long j;
  unsigned k;
} fn1(struct p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct p;
  fn1(p);
  for (;;) {
    struct r;
    p = r = p;
  }
}

int main() {
  return 0;
}
