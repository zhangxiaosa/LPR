#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  signed p = 24 | -(l.f && 24) - n;
  i.g = p;

  // Optimized code
  int optimized_n = (j.h && 24) ? 0 : -n;
  i.g = p;

  return 0;
}