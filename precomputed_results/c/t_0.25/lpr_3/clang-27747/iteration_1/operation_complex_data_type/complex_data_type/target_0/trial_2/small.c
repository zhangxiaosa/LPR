#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c i;
  struct c j;

  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;

  return 0;
}