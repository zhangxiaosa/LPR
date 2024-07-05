#include <stdio.h>

signed int l_i;
long l_j;
unsigned int l_k;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                    struct h p5) {
  p5.k;
w:
  goto w;
}

int fn2(unsigned int p1) {
  signed int q;  // Decomposed complex data type variable
  struct h p;
  int q_temp = q;  // Temporary variable to hold the value of q
  fn1(q_temp, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() { return 0; }
