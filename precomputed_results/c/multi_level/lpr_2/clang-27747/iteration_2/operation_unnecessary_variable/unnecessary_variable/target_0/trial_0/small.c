#include <stdint.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};

  // l.d = i.e; optimized out

  int n = i.h && 0;  // l.d = 0, optimized out

  i.g = -(l.f && 0) - n;
}