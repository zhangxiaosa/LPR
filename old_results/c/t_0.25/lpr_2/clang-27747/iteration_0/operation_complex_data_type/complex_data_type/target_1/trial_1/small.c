#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l;
  l.d = 24;
  l.e = 6738;
  l.f = 165;

  int m = j.e;
  l.d = m;

  int n = j.h && l.d;
  int o = l.d;

  signed int p = o | -(l.f && l.d) - n;
  i.g = p;

  return 0;
}