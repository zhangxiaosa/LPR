#include <stdio.h>

typedef unsigned f;
typedef unsigned g;
struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;
struct h fn1(unsigned, short, g, unsigned, struct h);
struct h fn1(unsigned p1, short p2, g p3, unsigned p4, struct h p5) {
  p5.k;
}
int main() {}
