#include <stdio.h>

struct h {
  int i;
  long j;
};

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}