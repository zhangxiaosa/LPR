#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  int j_e = 0;
  int j_h = 0;

  int l_d = 0;
  int l_e = 0;
  int l_f = 0;

  int m = j_e;
  l_d = m;

  int n = j_h && l_d;
  int o = l_d;

  signed p = o | -(l_f && l_d) - n;
  i.g = p;

  return 0;
}