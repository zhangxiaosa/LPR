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
  int n = l.d;
  i.g = l.d | -(l.f && l.d) - n;
}
