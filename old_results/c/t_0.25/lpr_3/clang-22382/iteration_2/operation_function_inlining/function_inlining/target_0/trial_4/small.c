#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int fn2() {
  struct h p;
  int p5_k;

w:
  p5_k = p.k;
  goto w;
}

int main() {
  for (;;) {
    struct h p;
    int p5_k;

w:
    p5_k = p.k;
    goto w;
  }
}