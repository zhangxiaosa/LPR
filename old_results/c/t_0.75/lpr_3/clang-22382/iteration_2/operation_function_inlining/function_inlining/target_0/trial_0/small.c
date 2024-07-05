#include <iostream>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;

  // Inlined body of fn1
  // p5.k; removed

w:
  goto w;

  // End of inlined body of fn1

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
