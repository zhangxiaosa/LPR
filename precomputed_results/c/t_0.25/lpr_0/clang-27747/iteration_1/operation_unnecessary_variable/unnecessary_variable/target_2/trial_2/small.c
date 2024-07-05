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
  int n = 0;
  int p = l.d | -(165 && l.d) - n;
  i_g = p;
}