#include <stdbool.h>

struct c {
  signed int d : 18;
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
  bool jh_ld = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - jh_ld;
}
