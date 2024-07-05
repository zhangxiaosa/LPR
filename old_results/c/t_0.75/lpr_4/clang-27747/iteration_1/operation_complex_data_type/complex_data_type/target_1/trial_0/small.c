#include <stdio.h>

struct c {
  int d;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  struct c i;
  struct c j;
  struct c l = {24, 6738, 165};

  l.d = j.e;

  int n = j.h && l.d;

  signed int p = l.d | -(l.f && l.d) - n;

  i.g = p;

  return 0;
}