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
  int m = j.e;
  j.d = m;
  int n = j.h && j.d;
  int o = j.d;
  signed p = o | -(j.f && j.d) - n;
  i.g = p;

  return 0;
}