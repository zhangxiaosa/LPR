#include <stdbool.h>

int main() {
  int d;
  int e;
  int f;
  int g;
  int j_e;
  int l_d;
  bool jh_ld;
  
  d = 0;
  e = 0;
  f = 0;
  g = 0;
  j_e = 0;
  l_d = 0;
  jh_ld = false;
  
  // Assign values to variables
  d = 24;
  e = 6738;
  f = 165;
  
  // Assign j.e to l.d
  l_d = j_e;
  
  // Calculate jh_ld
  jh_ld = j_e && l_d;
  
  // Calculate i.g
  g = l_d | -(f && l_d) - jh_ld;
  
  return 0;
}