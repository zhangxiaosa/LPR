
<SYS>

#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}

// Optimized program

int fn2_opt(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r1, r2, r3;
    r1 = r2 = r3 = p;
  }
}

int main() {}

</SYS>
