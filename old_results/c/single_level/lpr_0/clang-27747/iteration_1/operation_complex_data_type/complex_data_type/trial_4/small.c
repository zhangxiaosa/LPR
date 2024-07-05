#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c l = {24, 6738, 165};
  struct c i;
  struct c j;

  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;

  // Variables decomposed into primary data types:
  // int l_d = j.e;
  // int n = j.h && l_d;
  // signed p = l_d | -(l.f && l_d) - n;
  // i.g = p;

  return 0;
}