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
  j.e = l.d;
  int n = j.h && j.e;
  signed temp = j.e;
  signed p = temp | -(l.f && temp) - n;
  j.g = p;
  return 0;
}