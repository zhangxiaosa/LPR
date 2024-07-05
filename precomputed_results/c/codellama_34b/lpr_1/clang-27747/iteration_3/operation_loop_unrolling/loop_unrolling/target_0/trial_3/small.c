
#include <stdio.h>
#include <stdint.h>

struct c {
  int d : 18;
  int g;
};

int main() {
  struct c i;
  i.d = 0;
  i.g = 0;

  struct c l;
  l.d = i.d;
  int n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;

  return 0;
}
