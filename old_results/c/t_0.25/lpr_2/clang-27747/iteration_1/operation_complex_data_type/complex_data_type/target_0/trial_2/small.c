#include <stdio.h>

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

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
  signed int l_temp_d = 24;
  unsigned int l_temp_e = 6738;
  unsigned int l_temp_f = 165;

  d = l_temp_d;
  e = l_temp_e;
  f = l_temp_f;

  j_e = e;
  j_h = h;

  int n = j_h && l_temp_d;

  g = l_temp_d | -(l_temp_f && l_temp_d) - n;

  i_d = d;
  i_e = e;
  i_f = f;
  i_g = g;
  i_h = h;

  return 0;
}