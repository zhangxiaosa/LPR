#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;

  return 0;
}