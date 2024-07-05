
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
};

int main() {
  struct c i;
  struct c l;

  l.d = i.e;

  int n = l.d;
  int p = l.d | -(l.d && l.d) - n;

  i.g = p;

  return 0;
}
