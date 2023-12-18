#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c l = {24, 6738, 165};
  struct c j;
  struct c i;

  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;

  i.g = p;

  return 0;
}