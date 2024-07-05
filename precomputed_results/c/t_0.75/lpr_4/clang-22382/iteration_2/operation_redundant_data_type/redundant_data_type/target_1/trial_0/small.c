#include <stdio.h>

static struct {int i; long j; int k;} fn1(unsigned p1, struct {int i; long j; int k;} p5) {
  ((struct {int i; long j; int k;})p5).k;
w:
  goto w;
}

unsigned fn2() {
  struct {int i; long j; int k;} p;
  fn1(3, p);
  for (;;) {
    struct {int i; long j; int k;} r;
    p = r = (struct {int i; long j; int k;})p;
  }
}

int main() {}
