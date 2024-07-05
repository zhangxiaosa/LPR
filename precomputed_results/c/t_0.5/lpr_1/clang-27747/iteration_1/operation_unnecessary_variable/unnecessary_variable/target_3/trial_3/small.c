#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = 0;

  // Optimized assignment
  i.g = l.d | -(l.f && l.d);

  return 0;
}