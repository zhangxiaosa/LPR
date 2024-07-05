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
  struct c l = {24, 6738, 165};
  int m = 0; // Value of j.e cannot be determined at compile-time
  l.d = m;
  int n = 0; // Value of j.h && l.d cannot be determined at compile-time
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;

  return 0;
}