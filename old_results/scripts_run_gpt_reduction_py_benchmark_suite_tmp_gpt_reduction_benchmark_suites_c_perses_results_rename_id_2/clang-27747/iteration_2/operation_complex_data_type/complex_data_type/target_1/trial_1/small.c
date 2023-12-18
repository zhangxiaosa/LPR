#include<stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int i_d = 0;
  int i_e = 0;
  int i_f = 0;
  int i_g = 0;
  int i_h = 0;

  struct c l = {24, 6738, 165};
  l.d = i_e;
  int n = i_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;

  return 0;
}