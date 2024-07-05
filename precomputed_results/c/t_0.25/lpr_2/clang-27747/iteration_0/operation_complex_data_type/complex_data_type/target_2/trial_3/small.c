#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  int m = j.e;
  l_d = m;

  int n = j.h && l_d;
  int o = l_d;

  signed int p = o | -(l_f && l_d) - n;
  i.g = p;

  return 0;
}