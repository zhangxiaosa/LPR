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
  struct c l = {24, 6738, 165};
  l.d = i.e;
  int n = j.h && l.d;
  int p = -(i.f && l.d);
  i.g = p;

  return 0;
}