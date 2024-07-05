#include <stdio.h>

int original_data_type_i;
long original_data_type_j;
unsigned original_data_type_k;

static int fn1(unsigned p1, short p2, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;
  fn1(0, 0, original_data_type_i, original_data_type_j, original_data_type_k);
  for (;;) {
    int r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
