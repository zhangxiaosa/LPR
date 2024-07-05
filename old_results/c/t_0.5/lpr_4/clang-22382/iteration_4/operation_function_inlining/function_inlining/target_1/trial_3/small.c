#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  struct h r;
  w:
    goto w;
    for (;;) {
      p = r = p;
    }
}

int main() {
  return 0;
}
