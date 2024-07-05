#include <stdio.h>

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

int main() {
  i_d = 0;
  i_e = 0;
  i_f = 0;
  i_g = 0;
  i_h = 0;

  j_d = 0;
  j_e = 0;
  j_f = 0;
  j_g = 0;
  j_h = 0;

  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  l_d = j_e;

  int n = j_h && l_d;

  signed int p = l_d | -(l_f && l_d) - n;

  i_g = p;

  return 0;
}