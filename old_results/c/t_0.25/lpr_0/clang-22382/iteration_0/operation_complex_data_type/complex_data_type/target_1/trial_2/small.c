#include <stdio.h>

signed int p_i;
long p_j;
unsigned int p_k;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                    signed int p_i, long p_j, unsigned int p_k) {
  p_k;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  signed int p_i;
  long p_j;
  unsigned int p_k;
  struct h p;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    struct h r;
    p_i = r.i;
    p_j = r.j;
    p_k = r.k;
    p.i = p_i;
    p.j = p_j;
    p.k = p_k;
  }
}

int main() { return 0; }
