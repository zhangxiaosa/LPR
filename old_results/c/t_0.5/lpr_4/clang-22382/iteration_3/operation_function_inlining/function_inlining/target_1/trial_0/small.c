#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  struct h r;
  int p5_i = p.i;
w:
  goto w;
  for (;;)
    p = r = p;
}

int main() {
  fn2();
  return 0;
}