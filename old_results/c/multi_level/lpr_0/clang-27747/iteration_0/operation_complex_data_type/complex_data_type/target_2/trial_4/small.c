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
  struct c l = {24, 6738, 165};
  int l_d = l.d;
  unsigned l_e = l.e;
  unsigned l_f = l.f;
  signed l_g = l.g;
  signed l_h = l.h;
  
  unsigned m = l_e;
  l_d = m;
  
  int n = l_h && l_d;
  
  signed o = l_d;
  signed p = o | -(l_f && l_d) - n;
  
  i.g = p;
}