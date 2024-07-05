#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

signed int l_d;
unsigned int l_e;
unsigned int l_f;
signed int l_g;
signed int l_h;

signed int i_g;
unsigned int j_e;
signed int j_h;

int main() {
  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = j_e;

  int n = j_h && l_d;

  i_g = l_d | -(l_f && l_d) - n;

  return 0;
}