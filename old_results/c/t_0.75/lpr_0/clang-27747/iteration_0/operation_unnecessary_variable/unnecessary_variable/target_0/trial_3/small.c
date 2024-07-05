#include <iostream>

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
  int m = j.e;
  j.e = m;
  int n = j.h && j.e;
  int o = j.e;
  signed p = o | -(j.f && j.e) - n;
  i.g = p;

  return 0;
}