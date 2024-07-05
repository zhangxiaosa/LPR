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

  unsigned int j_e;
  unsigned int j_f;
  int j_g;
  int j_h;

  struct c l = {24, 6738, 165};
  int m = j_e;
  l.d = m;
  int n = j_h && l.d;
  int o = l.d;
  signed int p = o | -(l.f && l.d) - n;
  i.g = p;

  return 0;
}