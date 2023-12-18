#include <stdio.h>

int main() {
  int i_d = 0;
  int i_e = 0;
  int i_f = 0;
  int i_g = 0;
  int i_h = 0;

  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;

  l_d = i_e;

  int n = i_h && l_d;

  int condition = l_f && l_d;
  int complement = -(condition);
  i_g = l_d | complement - n;

  return 0;
}