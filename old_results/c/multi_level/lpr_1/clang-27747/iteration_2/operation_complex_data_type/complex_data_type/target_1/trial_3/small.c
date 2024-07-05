#include <stdbool.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c l = {24, 6738, 165};
  int j_d = l.e;
  unsigned int j_e = l.e;
  unsigned int j_f = l.f;
  int j_g = 0;
  int j_h = 0;

  int n = j_h && j_d;
  int o = j_d;
  j_g = o | -(j_f && j_d) - n;
}