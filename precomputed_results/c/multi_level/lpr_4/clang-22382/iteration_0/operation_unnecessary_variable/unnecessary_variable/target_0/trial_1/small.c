#include<stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  // Removed p5.k statement
  w:
    goto w;
}

unsigned fn2(p1) {
  // Removed unused variable declarations
  struct h p;
  int q;
  // Removed redundant assignment
  fn1(q, p1, 3, p);
  for (;;) {
    struct h r;
    // Removed redundant assignment
    p = r;
  }
}

int main() {}
