
#include <stdio.h>

static int fn1(int i, long j, int k) {
  j;
  for (;;)
    ;
}

unsigned fn2() {
  int i, j, k;
  fn1(i, j, k);
  for (;;) {
    int r;
    i = r = i;
  }
}

int main() {
  return 0;
}
