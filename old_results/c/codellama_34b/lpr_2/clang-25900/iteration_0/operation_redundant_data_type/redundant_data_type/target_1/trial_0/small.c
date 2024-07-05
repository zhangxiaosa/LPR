
#include <stdint.h>
#include <stdio.h>

int main() {
  int r;
  unsigned int t;
  int u;
  int s = -5L;

  struct m {
    int n : 18;
    int o : 1;
  };

  int fn4_inlined(int p1) {
    struct m ad = {1957};
    ad.o = p1;
    int ae;
    int af = t;
    ae = ad.o;
    ad.o = u;
    r = af % (~s / ae);
    return ad.o;
  }

  fn4_inlined(5);
  return 0;
}
