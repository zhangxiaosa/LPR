#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

int fn2() {
  struct h p;
  unsigned p5_k = p.k;
w:
goto w;
}

int main() {
  return 0;
}
