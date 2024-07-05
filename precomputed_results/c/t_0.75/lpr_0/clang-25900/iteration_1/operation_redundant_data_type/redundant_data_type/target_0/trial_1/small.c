#include <stdio.h>

typedef unsigned e;
typedef unsigned g;

e fn1(p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r; // typedef "c" replaced with "int"
static signed s = -5L;
g t;
int u; // typedef "c" replaced with "int"

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}