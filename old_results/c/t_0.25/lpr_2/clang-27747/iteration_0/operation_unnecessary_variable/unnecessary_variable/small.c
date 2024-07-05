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
  struct c l_temp = {24, 6738, 165};
  l_temp.d = j.e;
  int n = j.h && l_temp.d;
  i.g = l_temp.d | -(l_temp.f && l_temp.d) - n;
}