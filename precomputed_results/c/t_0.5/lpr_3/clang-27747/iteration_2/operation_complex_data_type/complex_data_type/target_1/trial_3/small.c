#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c j;

int main() {
  signed int l_d = 0;
  unsigned int l_e = 0;
  unsigned int l_f = 0;
  signed int l_g = 0;
  signed int l_h = 0;

  l_d = j.e;

  int n = 0;
  if (j.h != 0 && l_d != 0) {
    n = 1;
  } else {
    n = 0;
  }

  l_g = l_d | -(l_f != 0 && l_d != 0) - n;

  return 0;
}