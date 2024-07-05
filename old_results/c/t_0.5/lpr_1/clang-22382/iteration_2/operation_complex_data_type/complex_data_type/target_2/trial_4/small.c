#include <stdio.h>

int main() {
  int i;
  long j;
  int k;

  static int fn1_k(int k);

  unsigned fn2() {
    int i;
    long j;
    int k;
    int p_i;
    long p_j;
    int p_k;

    fn1_k(p_k);
    for (;;) {
      int r_i;
      long r_j;
      int r_k;
      int p_i;
      long p_j;
      int p_k;

      p_i = r_i = p_i;
      p_j = r_j = p_j;
      p_k = r_k = p_k;
    }
  }

  int fn1_k(int k) {
    k;
  w:;
    goto w;
  }

  return 0;
}