
#include <stdio.h>

struct c {
  int d;
  int e;
  int h;
};

int main() {
  struct c l;
  l.d = 24;
  l.e = 6738;
  l.h = 165;

  struct c i;
  struct c j;

  int m = j.e;
  l.d = m;

  int n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;

  return 0;
}
