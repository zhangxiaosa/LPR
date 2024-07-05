
#include <stdio.h>

struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(long p1, long p4, struct h p5) {
  p5.k;
  goto w;
}

long fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2(10);
  return 0;
}

void fn3(struct h p) {
  p.i = 10;
  p.j = 20;
  p.k = 30;
}

void fn4(struct h p) {
  printf("i: %ld, j: %ld, k: %ld\n", p.i, p.j, p.k);
}

void fn5(struct h p) {
  fn4(p);
}
