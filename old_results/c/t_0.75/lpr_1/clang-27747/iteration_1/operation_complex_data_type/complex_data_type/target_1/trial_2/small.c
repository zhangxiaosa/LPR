#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c l;

int main() {
  l.d = l.e;
  int n = l.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;
}
