#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
unsigned int j_e;
signed int j_h;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  int n = j_h && l.d;
  signed int p = l.d | -(l.f && l.d) - n;
  i.g = p;

  // Rest of the code

  return 0;
}