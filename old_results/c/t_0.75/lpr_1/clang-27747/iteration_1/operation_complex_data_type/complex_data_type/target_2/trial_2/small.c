#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c i;
  struct c j;
  int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;
  int l_g;
  int l_h;

  l_d = j.e;

  int n = j.h && l_d;

  l_g = l_d | -(l_f && l_d) - n;

  return 0;
}