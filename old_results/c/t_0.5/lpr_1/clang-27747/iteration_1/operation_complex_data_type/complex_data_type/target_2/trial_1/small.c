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

  l_d = j.e;
  int n = j.h && l_d;
  i.g = l_d | -(l_f && l_d) - n;

  return 0;
}