#include <stdio.h>

unsigned int je;
signed int jh;

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = je;
  int n = jh && l.d;
  signed int p = l.d | -(l.f && l.d) - n;
  i.g = p;
}
