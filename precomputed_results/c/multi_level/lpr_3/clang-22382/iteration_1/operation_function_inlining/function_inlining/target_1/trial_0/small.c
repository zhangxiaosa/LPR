#include <iostream>

struct h {
  int i;
  long j;
  unsigned k;
};

int fn2() {
  struct h p;
  unsigned p5_k;
  p5_k = p.k;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
