#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  struct c j;
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;

  l_d = j.e;

  int n = j.h && l_d;

  j.g = l_d | -(l_f && l_d) - n;

  return 0;
}