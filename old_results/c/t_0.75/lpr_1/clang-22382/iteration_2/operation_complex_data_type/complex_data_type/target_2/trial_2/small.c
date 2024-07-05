#include<stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned k) {
  return k;
}

unsigned fn2() {
  struct H p;
  for (;;) {
    struct H r;
    p = r;
  }
}

int main() {
  return 0;
}