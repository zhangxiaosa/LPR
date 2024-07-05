#include <stdbool.h>

struct c {
  int d;
  unsigned int e;
  unsigned int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;

  bool jh_ld = j.h && l.d;
  
  int negated_lf_ld = -(l.f && l.d);
  int result = negated_lf_ld - jh_ld;
  i.g = result;
}