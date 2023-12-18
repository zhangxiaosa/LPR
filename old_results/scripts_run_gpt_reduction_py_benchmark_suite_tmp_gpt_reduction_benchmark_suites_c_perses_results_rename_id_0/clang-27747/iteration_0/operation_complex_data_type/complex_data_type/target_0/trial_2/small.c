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
  i.d = 24;
  i.e = 6738;
  i.f = 165;

  i.d = j.e;

  i.g = i.d | -(i.f && i.d) - i.h;
}
