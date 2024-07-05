#include <stdio.h>

typedef int b;

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

  b m = j.e;
  l.d = m;

  b jh = j.h;
  b ld = l.d;
  b n = jh && ld;

  b o = ld;
  signed int lf_and_ld = l.f && l.d;
  signed int neg_lf_and_ld = -lf_and_ld;
  signed int p = o | neg_lf_and_ld - n;

  i.g = p;
}
