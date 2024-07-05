#include <stdio.h>

signed int h_i;
long h_j;
unsigned int h_k;
unsigned int l;
unsigned int fn1_p1;
short fn1_p2;
unsigned int fn1_p3;
unsigned int fn1_p4;
signed int fn1_p5_i;
long fn1_p5_j;
unsigned int fn1_p5_k;
unsigned int p1;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct h fn1(unsigned int, short, unsigned int, unsigned int, struct h);

unsigned int fn2(unsigned int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  ;
  goto w;
}

int main() {}
