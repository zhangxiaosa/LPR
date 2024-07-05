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
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;

  int l_d_new = j.e;
  int n = j.h && l_d_new;
  i.g = l_d_new | -(l_f && l_d_new) - n;
}