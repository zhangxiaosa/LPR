#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

unsigned fn2() {
  for (;;) {
    struct h p;
    p = p;
  }
}

int main() {
  fn2();
  return 0;
}