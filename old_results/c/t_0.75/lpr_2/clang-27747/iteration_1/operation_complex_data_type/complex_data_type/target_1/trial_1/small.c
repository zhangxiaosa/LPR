#include <stdio.h>

struct c {
  int d : 18;
  int f;
  int g;
};

struct c i;
int j_e;
int j_h;

int main() {
  int l_d = 24;
  int l_f = 6738;
  int l_d_modified = j_e;

  int n = j_h && l_d_modified;

  int l_f_and_l_d = l_f && l_d_modified;
  int negation = -l_f_and_l_d;
  int subtraction = negation - n;

  int p = l_d | subtraction;

  i.g = p;

  return 0;
}