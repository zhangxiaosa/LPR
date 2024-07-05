#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

int main() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;
  signed int j_e = l_d;
  signed int j_h = 0;
  signed int n = j_h && l_d;
  signed int i_g = l_d | -(l_f && l_d) - n;

  return 0;
}