#include <iostream>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int j_d;
  int j_e;
  int j_f;
  int j_g;
  int j_h;
  
  int l_d;
  int l_e;
  int l_f;
  int l_g;
  int l_h;
  
  j_d = 0;
  j_e = 0;
  j_f = 0;
  j_g = 0;
  j_h = 0;
  
  l_d = 24;
  l_e = 6738;
  l_f = 165;
  l_g = 0;
  l_h = 0;
  
  l_d = j_e;
  
  int n = j_h && l_d;
  
  j_g = l_d | -(l_f && l_d) - n;
  
  return 0;
}