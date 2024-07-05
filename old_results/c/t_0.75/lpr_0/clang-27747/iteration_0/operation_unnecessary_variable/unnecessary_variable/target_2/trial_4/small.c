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
  int n = j.h && j.e; // Optimized code: constant propagated
  int o = l.d;
  signed p = o | -(l.f && j.e) - n; // Optimized code: copy propagated
  i.g = p;
  return 0;
}