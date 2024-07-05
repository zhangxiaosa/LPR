#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

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

  j_d = 0;
  j_e = 0;
  j_f = 0;
  j_g = 0;
  j_h = 0;

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = j_e;

  int n = j_h && l_d;

  signed int p = l_d | -(l_f && l_d) - n;

  j_g = p;

  return 0;
}