#include <stdio.h>

struct c {
  int d;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  struct c j;
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  j.g = l.d | -(l.f && l.d) - n;

  return 0;
}