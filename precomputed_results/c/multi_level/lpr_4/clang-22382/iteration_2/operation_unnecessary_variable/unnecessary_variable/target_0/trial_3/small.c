#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
