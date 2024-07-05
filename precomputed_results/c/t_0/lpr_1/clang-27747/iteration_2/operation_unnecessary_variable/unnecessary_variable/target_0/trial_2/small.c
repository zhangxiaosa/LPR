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
  j.d = j.e;
  int n = j.h && j.e;
  signed p = j.e | -(j.f && j.e) - n;
  j.g = p;
}
