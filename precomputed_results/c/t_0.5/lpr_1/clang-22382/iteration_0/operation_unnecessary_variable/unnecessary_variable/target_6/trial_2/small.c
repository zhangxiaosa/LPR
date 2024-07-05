#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;
static struct h fn1(unsigned, struct h);
unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    // Infinite loop
  }
}
struct h fn1(unsigned p1, struct h p5) {
w:;
  goto w;
}
int main() {}
