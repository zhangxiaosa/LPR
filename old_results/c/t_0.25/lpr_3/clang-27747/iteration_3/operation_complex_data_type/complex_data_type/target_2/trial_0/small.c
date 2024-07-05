#include <stdbool.h>

int l_d = 24;
int l_e = 6738;
int l_f = 165;

struct c {
  int d : 18;
  int e;
  int f;
  int g;
};

struct c i;
struct c j;

int main() {
  struct c l = {l_d, l_e, l_f};
  l.d = j.e;
  bool jh_ld = j.e && l.d;
  i.g = l.d | -(l.f && l.d) - jh_ld;
}
