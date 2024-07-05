
#include <stdio.h>

typedef signed int a;
typedef int b;
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;

inline b fn1(b m, b n, b o) {
  struct c l = {24, 6738, 165};
  l.d = m;
  o = l.d;
  a p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() {
  b m = j.e;
  b n = j.h && i.d;
  fn1(m, n, i.d);
  return 0;
}
