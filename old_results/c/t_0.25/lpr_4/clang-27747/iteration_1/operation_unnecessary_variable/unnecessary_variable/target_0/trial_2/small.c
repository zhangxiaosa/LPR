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
  j.e = 24;  // Constant propagation
  j.f = 6738;  // Constant propagation
  j.g = 165;  // Constant propagation

  int n = j.h && j.e;  // Copy propagation

  i.g = j.e | -(j.f && j.e) - n;  // Copy propagation
}
