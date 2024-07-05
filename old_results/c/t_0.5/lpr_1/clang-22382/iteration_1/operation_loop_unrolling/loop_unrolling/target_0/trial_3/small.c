#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();
unsigned fn2(int p1) {
  struct h p;
  int q;
  fn1(q, p);

  // Unrolled loop iteration 1
  {
    struct h r;
    p = r = p;
  }

  // Unrolled loop iteration 2
  {
    struct h r;
    p = r = p;
  }

  // Rest of the program...
}

struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {
  // Rest of the program...
}
