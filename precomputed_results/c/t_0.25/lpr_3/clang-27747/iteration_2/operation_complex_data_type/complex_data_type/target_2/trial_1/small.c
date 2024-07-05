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
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  signed int j_e = j.e;

  bool jh_ld = j.h && l_d;

  signed int temp = l_f && l_d;
  signed int negated_temp = -temp;
  signed int subtracted_temp = negated_temp - jh_ld;

  i.g = subtracted_temp;
}