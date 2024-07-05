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
  // l.d = j.e; Optimized out
  int n = j.h && j.e;

  // Optimized assignment
  i.g = j.e | -(l.f && j.e) - n;

  return 0;
}