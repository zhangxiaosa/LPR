
#include <stdio.h>

typedef unsigned g;

int r;
static int s_high = -5L >> 16;
static int s_low = -5L & 0xFFFF;
g t;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s_high / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }
