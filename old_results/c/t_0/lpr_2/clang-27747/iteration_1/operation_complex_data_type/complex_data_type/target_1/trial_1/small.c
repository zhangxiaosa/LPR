#include <stdio.h>

int j_e;
int j_h;
int l_d;
int l_f;
int l_g;

struct c {
  int d : 18;
  int f;
  int g;
};

struct c i;

int main() {
  l_f = 165;
  int m = j_e;
  l_d = m;
  int n = j_h && l_d;
  int o = l_d;
  signed p = o | -(l_f && l_d) - n;
  i.g = p;
}
