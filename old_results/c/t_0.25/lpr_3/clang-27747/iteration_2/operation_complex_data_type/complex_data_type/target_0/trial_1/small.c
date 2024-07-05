#include <stdbool.h>

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

  // Decomposed variables
  signed int l_d = l.d;
  unsigned int l_e = l.e;
  unsigned int l_f = l.f;
  signed int l_g = l.g;
  signed int l_h = l.h;

  l_d = j.e;

  bool jh_ld = j.h && l_d;

  // Decomposed variables
  signed int i_g = l_d | -(l_f && l_d) - jh_ld;

  i.g = i_g;
}
