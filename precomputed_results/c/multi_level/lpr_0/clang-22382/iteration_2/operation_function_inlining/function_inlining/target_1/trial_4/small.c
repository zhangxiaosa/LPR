#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  for (;;) {
    struct original_data_type r;
    r.k;
w:
    goto w;
  }
}

int main() {}
