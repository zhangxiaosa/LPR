#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  signed int l_d;
  unsigned int l_e;
  unsigned int l_f;
  signed int l_g;
  signed int l_h;

  signed int i_d;
  unsigned int i_e;
  unsigned int i_f;
  signed int i_g;
  signed int i_h;

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = j_e;

  int n = j_h && l_d;

  i_g = l_d | -(l_f && l_d) - n;

  return 0;
}