#include <stdbool.h>

int main() {
  int d;
  int e;
  int f;
  int g;
  
  int i_d;
  int i_e;
  int i_f;
  int i_g;
  
  int j_d;
  int j_e;
  int j_f;
  int j_g;
  
  d = 18;
  e = 0;
  f = 0;
  g = 0;
  
  i_d = 0;
  i_e = 0;
  i_f = 0;
  i_g = 0;
  
  j_d = 0;
  j_e = 0;
  j_f = 0;
  j_g = 0;
  
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  
  l_d = j_e;
  
  bool jh_ld = j_e && l_d;
  
  i_g = l_d | -(l_f && l_d) - jh_ld;
  
  return 0;
}