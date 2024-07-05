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

  // Copy propagation: Assign the value of j.e to l.d
  l.d = j.e;

  int n = j.h && l.d;

  // Optimized: Remove unused variable o

  // Constant propagation and copy propagation
  int temp = l.f && l.d;
  signed p = j.e | -(temp)-n;

  // Copy propagation: Assign the value of p to i.g
  i.g = p;
}
