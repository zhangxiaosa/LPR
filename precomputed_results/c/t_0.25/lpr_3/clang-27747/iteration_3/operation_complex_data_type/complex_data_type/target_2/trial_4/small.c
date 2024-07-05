#include <stdbool.h>

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;

  int j_e = l_e;

  bool jh_ld = j_e && l_d;

  int temp = l_f && l_d;
  int negated_temp = -temp;
  int subtracted_temp = negated_temp - jh_ld;
  int i_g = l_d | subtracted_temp;

  return 0;
}