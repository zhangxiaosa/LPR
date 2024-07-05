
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
};

int main() {
  struct c i;
  struct c l;
  i.d = 1;
  i.e = 2;
  i.g = 3;
  l.d = i.e;
  int n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
  printf("n = %d\n", n);
  printf("p = %d\n", p);
  return 0;
}
