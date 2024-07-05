
#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static unsigned fn1(int i, long j, int k) {
  // function body
}

unsigned fn2() {
  struct h p;
  fn1(p.i, p.j, p.k);
  // function body
}

int main() {
  struct h p5 = {1, 2, 3};
  int i = p5.i;
  long j = p5.j;
  int k = p5.k;
  // function calls
}
