#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  signed p = l.d | -(l.f && l.d);
  j.g = p;
  return 0;
}