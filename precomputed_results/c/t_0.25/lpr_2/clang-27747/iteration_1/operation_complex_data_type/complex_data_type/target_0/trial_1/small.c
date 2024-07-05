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

  i_d = l_temp_d;
  i_e = l_temp_e;
  i_f = l_temp_f;

  int n = i_h && l_temp_d;

  i_g = l_temp_d | -(l_temp_f && l_temp_d) - n;

  return 0;
}