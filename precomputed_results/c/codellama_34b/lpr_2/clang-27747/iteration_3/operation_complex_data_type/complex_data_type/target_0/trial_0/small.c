
#include <stdio.h>

struct c {
  int d : 18;
};

int main() {
  struct c i;
  struct c j;
  int n;
  int p;

  j.d = 10;
  l.d = j.d;
  n = j.d && l.d;
  p = l.d | -(l.d && l.d) - n;
  i.d = p;

  printf("i.d = %d\n", i.d);

  return 0;
}
