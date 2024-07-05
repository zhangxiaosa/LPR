#include <stdio.h>

struct c {
  int d;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int d;
  int e;
  int f;
  int g;
  int h;

  int i_d;
  int j_e;
  int j_h;

  struct c i;
  struct c j;

  struct c l = {24, 6738, 165};
  i_d = j_e;
  int n = j_h && i_d;
  signed p = i_d | -(l.f && i_d) - n;
  g = p;

  return 0;
}