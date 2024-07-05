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
  
  struct c l = {24, 6738, 165};
  
  l.d = j_e;
  
  int n = j_h && l.d;
  
  signed p = l.d | -(l.f && l.d) - n;
  
  i_g = p;
  
  return 0;
}