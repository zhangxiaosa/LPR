#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c {
  int signed_d;
  unsigned int e;
  unsigned int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.signed_d = j.e;
  int n = j.h && l.signed_d;
  signed p = l.signed_d | -(l.f && l.signed_d) - n;
  i.g = p;

  return 0;
}