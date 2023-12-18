#include <stdio.h>

signed fn1(unsigned p1, int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;
long fn4() {
  struct m p2 = {1957};
  p2.o = fn1(v, 5);
  signed ae;
  int af = t;
  ae = p2.o;
  p2.o = u;
  r = af % (~s / ae);
  p2.o;
}

int main() { fn4(); }
