#include <stdlib.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;

  // Inlined body of fn1 function
  p.k;
  while (1) {
  }

  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
