#include <stdint.h>

int32_t i_d;
int32_t i_e;
int32_t i_f;
int32_t i_g;
int32_t i_h;

int main() {
  int32_t l_d = 24;
  int32_t l_e = 6738;
  int32_t l_f = 165;

  i_d = i_e;

  int32_t n = i_h && l_d;

  i_g = l_d | -(l_f && l_d) - n;

  return 0;
}