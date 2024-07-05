#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;

  int j_e = j.e;
  int l_d = j_e;

  int j_h = j.h;
  int l_d = j_h && l_d;

  int l_f_and_l_d = l_f && l_d;
  int neg_l_f_and_l_d = -l_f_and_l_d;
  int n = j_h && l_d;
  signed int p = l_d | neg_l_f_and_l_d - n;

  i.g = p;

  return 0;
}