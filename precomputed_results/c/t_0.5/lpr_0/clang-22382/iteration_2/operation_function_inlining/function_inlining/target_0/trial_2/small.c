#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}
