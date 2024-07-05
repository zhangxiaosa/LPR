#include <stdbool.h>

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

signed int i_d;
unsigned int i_e;
unsigned int i_f;
signed int i_g;
signed int i_h;

signed int j_d;
unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

int main() {
  struct {
    signed int d;
    unsigned int e;
    unsigned int f;
    signed int g;
    signed int h;
  } l;

  d = l.d = 24;
  e = l.e = 6738;
  f = l.f = 165;

  i_d = l.d;
  i_e = j_e;
  i_f = l.f;
  i_g = l.g | -(l.f && l.d) - (j_h && l.d);

  return 0;
}