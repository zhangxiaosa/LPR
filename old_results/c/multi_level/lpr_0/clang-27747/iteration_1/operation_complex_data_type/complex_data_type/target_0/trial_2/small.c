#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c l = {24, 6738, 165};
  struct c i;
  struct c j;

  signed i_d;
  unsigned i_e;
  unsigned i_f;
  signed i_g;
  signed i_h;

  signed j_d;
  unsigned j_e;
  unsigned j_f;
  signed j_g;
  signed j_h;

  l.d = j_e;

  int n = j_h && l_d;

  i_g = l_d | -(l_f && l_d) - n;

  return 0;
}