#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  for (;;) {
    p5.k;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);

  // Loop unrolling
  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  // Rest of the program

  return 0;
}

int main() {
  // Rest of the program

  return 0;
}
