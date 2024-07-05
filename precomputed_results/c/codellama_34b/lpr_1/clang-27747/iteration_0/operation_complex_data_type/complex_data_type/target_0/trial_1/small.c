
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  struct c l;
  l.d = 24;
  l.e = 6738;
  l.f = 165;
  l.g = 0;
  l.h = 0;

  struct c j;
  j.d = 0;
  j.e = 0;
  j.f = 0;
  j.g = 0;
  j.h = 0;

  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;

  return 0;
}
