#include <stdio.h>

signed int l_d;
unsigned int l_e;
unsigned int l_f;
signed int l_g;
signed int l_h;

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;

struct c j;

int main() {
  l_d = 24;
  l_e = 6738;
  l_f = 165;

  l_d = j_e;
  int n = j_h && l_d;
  signed int p = l_d | -(l_f && l_d) - n;
  i_g = p;
}