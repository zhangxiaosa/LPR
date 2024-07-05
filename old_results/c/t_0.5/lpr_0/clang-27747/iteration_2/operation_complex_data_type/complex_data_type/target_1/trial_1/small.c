#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;

  i.e = l_e;
  int l_d_copy = i.e;
  int n = i.h && l_d_copy;
  i.g = l_d_copy | -(l_f && l_d_copy) - n;
}
