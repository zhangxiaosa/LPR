
#include <stdint.h>

struct c {
  int16_t d : 18;
  int e;
};

int main() {
  struct c i, j;
  struct c l;
  l.d = j.e;
  int n = j.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
