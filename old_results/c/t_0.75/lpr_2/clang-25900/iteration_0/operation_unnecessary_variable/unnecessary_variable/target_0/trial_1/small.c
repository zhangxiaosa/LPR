#include<stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;
struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  int ae;
  int af = t;
  ae = 5; // Propagated constant value
  ad.o = u;
  r = af % (~s / ae);
}
