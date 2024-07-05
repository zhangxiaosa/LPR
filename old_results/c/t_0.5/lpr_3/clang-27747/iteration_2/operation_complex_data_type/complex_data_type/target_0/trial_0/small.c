#include <stdio.h>

signed int j_d;
unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

int main() {
  signed int l_d;
  unsigned int l_e;
  unsigned int l_f;
  signed int l_g;
  signed int l_h;

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  j_d = j_e;
  int n = j_h && l_d;
  j_g = l_d | -(l_f && l_d) - n;

  return 0;
}