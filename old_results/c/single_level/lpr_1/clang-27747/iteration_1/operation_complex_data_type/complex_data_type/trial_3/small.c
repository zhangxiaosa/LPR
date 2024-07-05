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
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;

  struct c l = {24, 6738, 165};

  int m = j.e;
  l.d = m;

  int n = j.h && l.d;

  signed int p = l.d | -(l.f && l.d) - n;

  i.g = p;

  return 0;
}