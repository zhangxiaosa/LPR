#include <limits.h>

typedef struct {
  int i;
  long j;
  unsigned k;
} original_data_type;

static unsigned fn1(unsigned p1, original_data_type p5) {
  p5.k;
  w:
  goto w;
}

unsigned fn2() {
  original_data_type p;
  fn1(0, p);
  while (1) {
    original_data_type r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}
