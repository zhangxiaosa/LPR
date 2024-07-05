#include <stdio.h>

struct c {
  int d : 18;
  int f;
};

int i_g;
int j_e;
int j_h;

int main() {
  struct c l;
  l.f = 165;
  l.d = j_e;
  int o = l.d;
  int p = o | -(l.f && l.d) - l.d;
  i_g = p;
}