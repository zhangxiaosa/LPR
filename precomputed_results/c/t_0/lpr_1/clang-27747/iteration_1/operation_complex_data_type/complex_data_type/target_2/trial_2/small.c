#include <stdio.h>

signed int l_d;
unsigned int l_e;
unsigned int l_f;

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
  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = j.e;
  int n = j.h && l_d;
  signed p = l_d | -(l_f && l_d) - n;
  i.g = p;
}
