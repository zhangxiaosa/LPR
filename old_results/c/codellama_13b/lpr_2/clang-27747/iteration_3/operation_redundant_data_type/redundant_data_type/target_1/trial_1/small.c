c
#include <stdio.h>

int main() {
  struct c {
    int d : 18;
    int e;
    int f;
  };

  int j;
  short i;
  short m;

  struct c l = {24, 6738, 165};
  l.d = j;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;

  return 0;
}
