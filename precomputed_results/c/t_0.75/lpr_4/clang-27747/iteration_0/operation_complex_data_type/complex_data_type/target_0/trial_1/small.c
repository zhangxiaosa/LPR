#include <stdbool.h>

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

signed int i_g;
signed int j_e;
signed int j_h;

int main() {
  d = 0;
  e = 0;
  f = 0;
  g = 0;
  h = 0;

  i_g = 0;
  j_e = 0;
  j_h = 0;

  signed int l_d = 0;
  unsigned int l_e = 0;
  unsigned int l_f = 0;

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  int m = j_e;
  l_d = m;

  int n = j_h && l_d;

  int o = l_d;

  signed int p = o | -(l_f && l_d) - n;

  i_g = p;
}