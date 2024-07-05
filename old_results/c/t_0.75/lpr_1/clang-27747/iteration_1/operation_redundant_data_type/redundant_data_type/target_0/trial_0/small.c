#include <stdio.h>

signed int d : 18;
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
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;
  
  l_d = j_e;
  
  int n = j_h && l_d;
  
  i_g = l_d | -(l_f && l_d) - n;
}
