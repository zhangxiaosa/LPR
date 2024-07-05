#include <stdio.h>

unsigned fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  u = fn1(5);
  int ae = u;
  u = u;
  r = t % (~s / ae);
}
