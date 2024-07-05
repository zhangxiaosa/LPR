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
  int n = j.h && 24; // Optimized expression
  int o = 24; // Optimized expression
  signed p = o | -(l.f && 24) - n; // Optimized expression
  i.g = p;
}
