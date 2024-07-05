
#include <stdio.h>

struct c {
  int d : 18;
  int g;
};

int main() {
  struct c i;
  int n, p;

  i.d = 10;

  n = i.d && i.d;
  p = i.d | -(i.d && i.d) - n;

  i.g = p;

  printf("i.d = %d\n", i.d);
  printf("i.g = %d\n", i.g);

  return 0;
}
