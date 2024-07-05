#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

int main() {
  return 0;
}
