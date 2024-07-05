#include <stdbool.h>

struct c {
  signed int : 18 d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

signed int : 18 i;
signed int : 18 j;

int main() {
  signed int : 18 l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  l_d = j_e;
  signed int j_h_ld = j_h && l_d;
  i_g = l_d | -(l_f && l_d) - j_h_ld;

  return 0;
}