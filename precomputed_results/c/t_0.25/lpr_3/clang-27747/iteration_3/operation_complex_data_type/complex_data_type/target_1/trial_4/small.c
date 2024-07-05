#include <stdbool.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e; // Optimized assignment
  bool jh_ld = l.e && l.d;
  i.g = l.d | -(l.f && l.d) - jh_ld;
}