#include <stdio.h>

static int p_i;
static long p_j;
static unsigned p_k;

int main() {
  struct original_data_type {
    int i;
    long j;
    unsigned k;
  };

  unsigned fn2() {
    struct original_data_type p;
    for (;;) {
      struct original_data_type r;
      p = r = p;
    }
  }
}
