#include <stdio.h>

short a;
int b;
long c;
unsigned int d;
unsigned int e;
unsigned int f;
unsigned int g;

struct {
  signed int i;
  long j;
  unsigned int k;
} h;

unsigned int l;

static struct {
  signed int i;
  long j;
  unsigned int k;
} fn1(unsigned int f, short a, unsigned int g, unsigned int d, struct h);

unsigned int fn2(unsigned int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                  struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
