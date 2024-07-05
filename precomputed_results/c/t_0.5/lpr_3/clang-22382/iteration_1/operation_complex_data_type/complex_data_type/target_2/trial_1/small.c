#include <stdio.h>

signed i;
long j;
unsigned k;

static void fn1() {
  for (;;) {
    k;
  }
}

unsigned fn2() {
  signed p_i;
  long p_j;
  unsigned p_k;

  fn1();
  for (;;) {
    signed r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
