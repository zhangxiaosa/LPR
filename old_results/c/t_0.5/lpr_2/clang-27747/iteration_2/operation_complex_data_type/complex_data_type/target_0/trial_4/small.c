#include <stdbool.h>

int main() {
  int c_d;
  int c_e;
  int c_f;
  int c_g;
  int c_h;

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

  int l_d;
  int l_e;
  int l_f;
  int l_g;
  int l_h;

  c_d = 18;
  c_e = 0;
  c_f = 0;
  c_g = 0;
  c_h = 0;

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

  int n = j_h && l_d;

  bool temp1 = l_f && l_d;
  int temp2 = -(temp1);
  int temp3 = temp2 - n;
  int p = l_d | temp3;

  i_g = p;

  return 0;
}