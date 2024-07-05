
#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

int l;

static struct h fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  int i, j, k;
  struct h h;
  i = 0;
  j = 0;
  k = 0;
  h.i = i;
  h.j = j;
  h.k = k;
  fn1(i, j, k, 3, h);
  for (;;) {
    struct h r;
    r.i = i;
    r.j = j;
    r.k = k;
    fn1(i, j, k, 3, r);
  }
}
