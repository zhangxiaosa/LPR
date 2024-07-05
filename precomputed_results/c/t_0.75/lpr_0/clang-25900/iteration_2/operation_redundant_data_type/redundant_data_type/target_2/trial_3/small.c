#include <stdio.h>

unsigned int fn1(int p2) { return p2; }

struct m {
  unsigned int n : 18;
  unsigned int o : 1;
};

unsigned int r;
static unsigned int s = -5;
unsigned int t;
unsigned int u;

int main() {
  struct m ad = {1957};
  ad.o = (unsigned int)fn1(5);
  unsigned int ae;
  ae = ad.o;
  ad.o = (unsigned int)u;
  r = (unsigned int)t % ((unsigned int)(~s) / ae);
}
