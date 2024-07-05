#include <stdio.h>

struct c {
  int d;
  unsigned int e;
  unsigned int f;
  int g;
  int h;
};

int main() {
  struct c i;
  int j_d;
  unsigned int j_e;
  unsigned int j_f;
  int j_g;
  int j_h;

  struct c l = {24, 6738, 165};
  l.d = j_e;

  int n = j_h && l.d;

  j_g = l.d | -(l.f && l.d) - n;

  return 0;
}