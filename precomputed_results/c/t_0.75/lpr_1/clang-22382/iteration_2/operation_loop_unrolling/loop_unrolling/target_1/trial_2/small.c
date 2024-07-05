#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  p5.k;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {

}
