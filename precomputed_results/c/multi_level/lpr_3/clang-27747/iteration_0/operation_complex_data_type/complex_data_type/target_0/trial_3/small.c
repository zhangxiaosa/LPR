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

  unsigned int i_e;
  unsigned int i_f;
  signed int i_g;

  unsigned int j_e;
  unsigned int j_f;
  signed int j_g;

  signed int b1;
  signed int b2;
  signed int o;
  signed int p;

  j_e = j.e;
  l.d = j_e;

  b2 = j.h && l.d;

  o = l.d;

  p = o | -(l.f && l.d) - b2;

  i_g = p;

  return 0;
}