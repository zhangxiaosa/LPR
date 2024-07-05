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
  int l_d = j.e;
  int l_f = l_d;
  int l_h = j.h && l_d;
  int l_o = l_d;
  signed l_p = l_o | -(l_f && l_d) - l_h;
  i.g = l_p;
}