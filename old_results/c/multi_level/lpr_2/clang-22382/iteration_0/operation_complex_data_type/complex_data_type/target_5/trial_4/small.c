#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed int i;   // modified
  long j;         // modified
  unsigned int k; // modified
};

unsigned d l;      // modified

static struct h fn1(unsigned f, short a, unsigned g, unsigned d, struct h);

unsigned e fn2(unsigned p1) {  // modified
  struct h p;
  int q;       // modified
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned f, short a, unsigned g, unsigned d, struct h p5) {  // modified
  p5.k;

w:
  goto w;
}

int main() {}
