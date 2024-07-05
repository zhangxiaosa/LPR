#include <stdio.h>

typedef struct {
  int i;
  long j;
  unsigned int k;
} h;

unsigned int l;
static h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, h p5);
int fn2(short p1) {
  h p;
  int q;
  fn1(q, l, (unsigned int)p1, 3, p);
  for (;;) {
    h r;
    p = r = p;
  }
}

h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
