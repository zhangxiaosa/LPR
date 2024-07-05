#include <stdbool.h>

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  
  int j_e = l_e;
  bool jh_ld = j_e && l_d;
  int i_g = l_d | -(l_f && l_d) - jh_ld;
  
  return 0;
}