#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

int h_i;
long h_j;
int h_k;

static int fn1_i;
static long fn1_j;
static int fn1_k;

unsigned int fn2_p_i;
unsigned long fn2_p_j;
unsigned int fn2_p_k;

unsigned int fn2_r_i;
unsigned long fn2_r_j;
unsigned int fn2_r_k;

static int fn1(struct h p5) {
  fn1_k;
w:
  goto w;
}

unsigned int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}