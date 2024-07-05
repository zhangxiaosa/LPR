
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int d = 24;
  int e = 6738;
  int f = 165;
  int g = 0;
  int h = 0;

  struct c i;
  struct c j;

  i.d = d;
  i.e = e;
  i.f = f;
  i.g = g;
  i.h = h;

  j.d = d;
  j.e = e;
  j.f = f;
  j.g = g;
  j.h = h;

  int m = j.e;
  i.d = m;

  int n = j.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;

  i.g = p;

  return 0;
}
