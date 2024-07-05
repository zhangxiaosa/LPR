#include <stdbool.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  bool jh_ld = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - jh_ld;
}