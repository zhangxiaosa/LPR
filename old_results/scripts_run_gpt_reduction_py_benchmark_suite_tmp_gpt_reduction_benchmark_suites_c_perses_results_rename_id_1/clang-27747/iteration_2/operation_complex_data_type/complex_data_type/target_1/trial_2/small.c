#include <stdbool.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  i.g = o | -(l.f && l.d) - n;
}