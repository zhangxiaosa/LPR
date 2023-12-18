#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

int main() {
  struct c i;
  struct c j;
  struct c l = {24, 6738, 165};
  int b1 = j.e;
  l.d = b1;
  int b2 = j.h && l.d;
  int o = l.d;
  signed int p = o | -(l.f && l.d) - b2;
  i.g = p;

  // Rest of the program

  return 0;
}