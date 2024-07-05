#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  signed p = i.d | -(i.f && i.d) - (i.h && i.d);
  i.g = p;

  return 0;
}