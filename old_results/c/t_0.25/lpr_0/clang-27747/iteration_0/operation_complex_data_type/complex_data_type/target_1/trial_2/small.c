#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int i_d;
  int i_e;
  int i_f;
  int i_g;
  int i_h;
  
  int j_d;
  int j_e;
  int j_f;
  int j_g;
  int j_h;
  
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  
  l_d = j_e;
  
  int n = j_h && l_d;
  int o = l_d;
  int p = o | -(l_f && l_d) - n;
  
  i_g = p;
}
