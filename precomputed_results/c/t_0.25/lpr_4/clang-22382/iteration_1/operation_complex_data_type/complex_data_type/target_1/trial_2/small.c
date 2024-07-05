#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static int fn1_i;
static long fn1_j;
static int fn1_k;

unsigned fn1_p1;
short fn1_p3;
unsigned fn1_p5;

int fn2_q;
int fn2_r_i;
long fn2_r_j;
int fn2_r_k;

static struct h fn1(unsigned p1, short p3, unsigned p5, struct h p6) {
  p6.k;
w:;
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
