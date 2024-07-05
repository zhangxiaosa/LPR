#include <stdbool.h>

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

signed int i_d;
unsigned int i_e;
unsigned int i_f;
signed int i_g;
signed int i_h;

signed int j_d;
unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

int main() {
  signed int l_d;
  unsigned int l_e;
  unsigned int l_f;
  signed int l_g;
  signed int l_h;

  d = l_d;
  bool jh_ld = j_h && l_d;
  g = l_d | -(l_f && l_d) - jh_ld;
}