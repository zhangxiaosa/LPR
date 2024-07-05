
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

int main() {
  struct c i, l;
  int m, n, p;

  m = i.e;
  l.d = m;
  n = i.h && l.d;
  p = l.d | -(l.d && l.d) - n;
  i.g = p;

  return 0;
}
