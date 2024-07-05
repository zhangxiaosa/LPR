
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  int ae = 1957;
  r = u % (~s / ae);
  return u;
}

int main() { fn4_inlined(5); }
