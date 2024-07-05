#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  signed int i_d;
  unsigned int i_e;
  unsigned int i_f;
  signed int i_g;
  signed int i_h;

  signed int j_d;
  unsigned int j_e;
  unsigned int j_f;
  signed int j_g;
  signed int j_h;

  struct c i;
  struct c j;

  struct c l = {24, 6738, 165};
  l.d = j_e;
  int n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;

  return 0;
}