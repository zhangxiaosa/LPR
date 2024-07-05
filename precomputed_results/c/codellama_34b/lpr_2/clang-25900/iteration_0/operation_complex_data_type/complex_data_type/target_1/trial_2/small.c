
<</SYS>>

#include <iostream>

typedef unsigned g;
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;
g t;
int u;

int fn4_inlined(p1) {
  int ae;
  int af = t;
  ae = p1;
  af = u;
  r = af % (~s / ae);
  return p1;
}

int main() {
  fn4_inlined(5);
}

/*
 * The program has been optimized by decomposing the `ad` structure variable into
 * its individual components. The `ad.o` field has been replaced with the `p1`
 * parameter, and the `ad.n` field has been removed because it was not used in
 * the program.
 */
