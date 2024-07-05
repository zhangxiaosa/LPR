#include <stdio.h>

int j_d;
int j_e;
int j_f;
int j_g;
int j_h;

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  
  j_d = j_e;
  
  int n = j_h && l_d;
  
  j_g = l_d | -(l_f && l_d) - n;

  return 0;
}