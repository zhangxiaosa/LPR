#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l;
  l.f = 165;
  l.d = 0; // Optimized constant value
  int n = l.h && l.d; // Optimized constant value
  i.g = l.d | -(l.f && l.d) - n;
  return 0;
}