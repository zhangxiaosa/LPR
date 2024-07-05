#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int l_d = l.d;
  int l_e = l.e;
  int l_f = l.f;
  int l_g = l.g;
  int l_h = l.h;

  l_d = j.e;
  int n = j.h && l_d;
  signed p = l_d | -(l_f && l_d) - n;
  i.g = p;
}
