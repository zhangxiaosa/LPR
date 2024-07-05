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
  struct c l = {24, 6738, 165};
  signed int j_e = j.e;
  signed int l_d = j_e;
  signed int j_h = j.h;
  signed int n = j_h && l_d;
  signed int o = l_d;
  signed int p = o | -(l.f && l_d) - n;
  i.g = p;

  return 0;
}