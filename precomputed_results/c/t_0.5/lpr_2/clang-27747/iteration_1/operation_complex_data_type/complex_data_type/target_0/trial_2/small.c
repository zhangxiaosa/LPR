#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  l_d = j.e;

  int j_h = j.h;
  int l_d_value = l_d;
  int n = j_h && l_d_value;

  int l_f_and_l_d = l_f && l_d_value;
  int neg_l_f_and_l_d = -l_f_and_l_d;
  int neg_l_f_and_l_d_minus_n = neg_l_f_and_l_d - n;
  signed int p = l_d_value | neg_l_f_and_l_d_minus_n;

  i.g = p;
}
