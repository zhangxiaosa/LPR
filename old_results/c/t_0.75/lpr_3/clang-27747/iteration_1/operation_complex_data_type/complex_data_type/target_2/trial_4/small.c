#include <stdio.h>

signed int l_d = 24;
unsigned int l_e = 6738;
unsigned int l_f = 165;
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
  l_d = j.e;
  int n = j.h && l_d;
  i.g = l_d | -(l_f && l_d) - n;

  j.e = l_d;
  j.h = n;

  return 0;
}