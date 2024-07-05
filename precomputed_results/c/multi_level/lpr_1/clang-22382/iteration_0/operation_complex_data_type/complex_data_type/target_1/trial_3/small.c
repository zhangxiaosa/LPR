#include <stdio.h>

signed int i;
long int j;
unsigned int k;
unsigned int l;

static signed int fn1(unsigned int p1, short int p2, unsigned int p3,
                    unsigned int p4, signed int p5_i, long int p5_j, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2(int p1) {
  signed int p_i;
  long int p_j;
  unsigned int p_k;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    signed int r_i;
    long int r_j;
    unsigned int r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {
  return 0;
}