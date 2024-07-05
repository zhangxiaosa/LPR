#include<stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  struct h r1;

  for (;;) {
    p = r1 = p;
    // Inline contents of fn1
    p.k;
  }
}

int main() {
  // Empty main function
}