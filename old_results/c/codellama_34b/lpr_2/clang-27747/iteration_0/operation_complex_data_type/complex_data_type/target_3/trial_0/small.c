
#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

int main() {
  struct c l;
  struct c j;

  int m;
  int n;
  int o;
  int p;

  l.d = 24;
  l.e = 6738;
  l.f = 165;

  m = j.e;
  l.d = m;

  n = j.h && l.d;

  o = l.d;

  p = o | -(l.f && l.d) - n;

  i.g = p;

  return 0;
}
