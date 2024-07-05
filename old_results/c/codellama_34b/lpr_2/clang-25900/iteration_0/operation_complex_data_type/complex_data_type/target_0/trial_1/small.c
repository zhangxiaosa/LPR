
#include <iostream>
#include <cstdint>

using namespace std;

typedef unsigned int g;

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
g t;
int u;

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

int main() {
  fn4_inlined(5);
  return 0;
}
