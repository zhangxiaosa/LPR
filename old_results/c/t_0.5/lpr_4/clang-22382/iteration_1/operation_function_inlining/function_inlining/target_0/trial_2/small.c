#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

unsigned fn2(unsigned p1) {
  struct h p;
  p.i = p.i;
  p.j = p.j;
  p.k = p.k;

  // Inlined body of fn1
  // signed p5_i = p.i;
  // w:;
  // goto w;

  for (;;) {
    p = p;
  }
}

int main() {
  return 0;
}
