#include <stdbool.h>

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
  l.d = j.e;
  bool jh_ld = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - (jh_ld ? 1 : 0);
}