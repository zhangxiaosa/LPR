#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  struct c l;
  l.f = 165;
  l.d = j.e;
  i.g = l.d | -(l.f && l.d) - (j.h && l.d);
}
