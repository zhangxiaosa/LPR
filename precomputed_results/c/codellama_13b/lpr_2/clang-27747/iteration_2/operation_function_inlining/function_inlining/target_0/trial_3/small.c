
#include <stdio.h>

int j_h;
int n;
struct c {
  int d : 18;
  int e;
  int f;
};
int i_g;
int j_e;

void inline_func() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}

int main() {
  inline_func();
  printf("n: %d, i_g: %d\n", n, i_g);
  return 0;
}
