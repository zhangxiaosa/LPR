#include <stdio.h>

struct c {
  signed int d1 : 18;
  unsigned int e1;
  unsigned int f1;
  signed int g1;
  signed int h1;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d1 = j.e1;
  int n = j.h1 && l.d1;
  signed int p = l.d1 | -(l.f1 && l.d1) - n;
  i.g1 = p;
}
