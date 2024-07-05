#include <stdio.h>

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
  signed int d = 24;
  unsigned int e = 6738;
  unsigned int f = 165;

  d = j.e;
  int n = j.h && d;
  i.g = d | -(f && d) - n;

  return 0;
}
