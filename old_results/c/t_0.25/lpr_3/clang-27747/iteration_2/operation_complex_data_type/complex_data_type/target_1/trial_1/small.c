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
  signed int l_d = j.e;
  bool jh_ld = j.h && l_d;
  signed int l_f_and_l_d = l.f && l_d;
  signed int negated_l_f_and_l_d = -(l_f_and_l_d);
  signed int jh_ld_minus_negated_l_f_and_l_d = jh_ld - negated_l_f_and_l_d;
  i.g = jh_ld_minus_negated_l_f_and_l_d;
}