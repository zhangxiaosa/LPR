#include <stdio.h>

signed int i_d, j_d, l_d;
unsigned int i_e, j_e, l_e, i_f, j_f, l_f;
signed int i_g, j_g, l_g;
signed int i_h, j_h, l_h;

int main() {
  struct c {
    signed d : 18;
    unsigned e;
    unsigned f;
    signed g;
    signed h;
  };

  struct c i;
  struct c j;

  struct c l = {24, 6738, 165};

  l_d = j_e;
  int n = j_h && l_d;
  i_g = l_d | -(l_f && l_d) - n;

  return 0;
}
