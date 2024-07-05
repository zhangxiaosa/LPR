#include <stdbool.h>

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
  signed int l_d;
  unsigned int l_e;
  unsigned int l_f;

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

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = j_e;

  int n = (j_h != 0) && (l_d != 0);

  i_g = (l_d | -((l_f != 0) && (l_d != 0))) - n;

  return 0;
}