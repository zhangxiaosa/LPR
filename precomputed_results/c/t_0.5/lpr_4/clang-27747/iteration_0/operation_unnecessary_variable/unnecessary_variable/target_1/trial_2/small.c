#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  int o = j.e;
  int p = o | -(l.f && j.e);
  j.g = p;

  return 0;
}
