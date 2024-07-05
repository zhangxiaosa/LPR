#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = (l.d != 0) ? j.h : 0;
  j.g = l.d | -(l.f && l.d) - n;

  return 0;
}