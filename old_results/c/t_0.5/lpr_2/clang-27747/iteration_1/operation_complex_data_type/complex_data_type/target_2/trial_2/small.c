#include <stdio.h>

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
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  l_d = j.e;
  int n = j.h && l_d;
  signed int p = l_d | -(l_f && l_d) - n;
  i.g = p;
}