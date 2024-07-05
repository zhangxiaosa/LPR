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
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  struct c j = {0, m, 0, 0, 0};
  return 0;
}