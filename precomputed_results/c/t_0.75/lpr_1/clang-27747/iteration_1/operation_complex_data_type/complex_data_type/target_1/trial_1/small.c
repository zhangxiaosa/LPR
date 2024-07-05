#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};

  // Decomposed variables
  signed int l_d = l.d;
  unsigned int l_e = l.e;
  unsigned int l_f = l.f;
  signed int l_g = l.g;
  signed int l_h = l.h;

  l_d = j.e;
  int n = j.h && l_d;
  i.g = l_d | -(l_f && l_d) - n;
}
