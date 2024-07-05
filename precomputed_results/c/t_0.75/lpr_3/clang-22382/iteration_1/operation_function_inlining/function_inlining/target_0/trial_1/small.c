#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2(p1) {
  struct h p;
  unsigned p1 = 0;

w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
