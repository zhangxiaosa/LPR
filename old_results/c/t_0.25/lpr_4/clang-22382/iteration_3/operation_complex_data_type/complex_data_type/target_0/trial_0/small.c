#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

int main() {
  int p_i;
  long p_j;
  int p_k;

  for (;;) {
    int r_i;
    long r_j;
    int r_k;

    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}
