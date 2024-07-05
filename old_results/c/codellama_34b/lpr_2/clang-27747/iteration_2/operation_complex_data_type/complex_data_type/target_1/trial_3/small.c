
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int h;
};

int main() {
  int l_d, l_e, l_h;
  int n, p;

  l_d = 0;
  l_e = 0;
  l_h = 0;

  n = l_h && l_d;
  p = l_d | -(l_d && l_d) - n;

  l_d = p;

  printf("l_d: %d\n", l_d);
  printf("l_e: %d\n", l_e);
  printf("l_h: %d\n", l_h);

  return 0;
}
