#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int i_d;
  int i_e;
  int i_f;
  int i_g;
  int i_h;

  int l_d;
  int l_e;
  int l_f;
  int l_g;
  int l_h;

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = i_e;

  int n = i_h && l_d;

  i_g = l_d | -(l_f && l_d) - n;

  return 0;
}