#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e;
  int n = l.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;

  return 0;
}