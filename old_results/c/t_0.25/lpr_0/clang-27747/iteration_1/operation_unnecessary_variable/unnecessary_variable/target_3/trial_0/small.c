#include <stdio.h>

struct c {
  int d : 18;
};

int i_g;
int j_e;
int j_h;

int main() {
  struct c l;
  l.d = j_e;
  int p = l.d | -(165 && l.d) - 0;
  i_g = p;

  return 0;
}