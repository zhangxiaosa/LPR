#include <stdio.h>

struct {
  int i;
  long j;
  unsigned k;
} original_data_type;

static struct {
  int i;
  long j;
  unsigned k;
} fn1(unsigned p1, short p2, struct {
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
  fn1(0, 0, p);
  for (;;) {
    struct {
      int i;
      long j;
      unsigned k;
    } r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {}
