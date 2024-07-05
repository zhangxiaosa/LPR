#include <stdio.h>

unsigned int l;

unsigned int fn2(unsigned int p1) {
  signed int p_i;
  long int p_j;
  unsigned int p_k;
  unsigned int r_i;
  long int r_j;
  unsigned int r_k;

  fn1(l, p_i, p_j, p_k);

  for (;;) {
    unsigned int p_i;
    long int p_j;
    unsigned int p_k;
    unsigned int r_i;
    long int r_j;
    unsigned int r_k;

    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
  }
}

void fn1(unsigned int p1, signed int p_i, long int p_j, unsigned int p_k) {
  unsigned int p5_i = p_i;
  long int p5_j = p_j;
  unsigned int p5_k = p_k;

w:
  goto w;
}

int main() {}
