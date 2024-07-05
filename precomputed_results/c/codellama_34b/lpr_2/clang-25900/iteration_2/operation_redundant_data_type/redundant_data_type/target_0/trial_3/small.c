
#include <iostream>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

int fn4_inlined(p1) {
  r = p1 % (~s / p1);
  return r;
}

int main() { fn4_inlined(5); }
