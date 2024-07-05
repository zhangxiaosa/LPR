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

  j.e = l_d;

  int j_h = j.h;
  int l_d = j.d;

  int n = j_h && l_d;

  int i_g = l_d | -(l_f && l_d) - n;

  i.g = i_g;

  return 0;
}