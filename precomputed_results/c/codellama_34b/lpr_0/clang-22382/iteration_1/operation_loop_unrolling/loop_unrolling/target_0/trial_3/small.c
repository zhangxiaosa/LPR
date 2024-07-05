
#include <iostream>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.j;
  for (int i = 0; i < 10; i++) {
    // do something useful
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (int i = 0; i < 10; i++) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}
