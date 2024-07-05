#include <stdio.h>

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

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
  d = l.d;
  e = j.e;
  unsigned int n = h && d;
  unsigned int o = d;
  signed int p = o | -(f && d) - n;
  g = p;
}
