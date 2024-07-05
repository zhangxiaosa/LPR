#include <stdio.h>


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
    int r_i;
    long r_j;
    unsigned r_k;
    original_data_type r;

    r_i = r.i;
    r_j = r.j;
    r_k = r.k;

    p = r = p;
  }
}

int main() {}
