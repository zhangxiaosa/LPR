#include <stdio.h>

struct {
  int i;
  long j;
  unsigned k;
} p5;

static struct {
  int i;
  long j;
  unsigned k;
} fn1(struct {
  int i;
  long j;
  unsigned k;
} p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct {
    int i;
    long j;
    unsigned k;
  } p;
  fn1(p);
  for (;;) {
    struct {
      int i;
      long j;
      unsigned k;
    } r1;
    p = r1 = p;
  }
}

int main() {}
