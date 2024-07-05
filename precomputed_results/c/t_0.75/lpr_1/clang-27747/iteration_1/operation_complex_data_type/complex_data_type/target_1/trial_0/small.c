#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

int main() {
  struct c i;
  struct c j;

  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;

  return 0;
}