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

  int j_d;
  int j_e;
  int j_f;
  int j_g;
  int j_h;

  struct c l = {24, 6738, 165};

  int l_d;
  int l_e;
  int l_f;
  int l_g;
  int l_h;

  l_d = j_e;

  int n = j_h && l_d;

  int p = l_d | -(l_f && l_d) - n;

  i_g = p;

  return 0;
}