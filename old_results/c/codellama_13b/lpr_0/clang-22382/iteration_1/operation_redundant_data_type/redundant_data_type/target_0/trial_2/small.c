
#include <stdio.h>

struct s {
  int i;
  long j;
  unsigned k;
};

struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s q;
  fn1(0, p1, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  unsigned p1 = 0;
  unsigned p3 = 0;
  struct s p5;
  struct s q;
  fn1(p1, p3, p5);
  for (;;) {
    struct s r = q;
    q = r;
  }
  return 0;
}
