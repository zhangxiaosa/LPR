c
#include <stdio.h>

struct c {
  int d : 18;
};

int i_d;

int main() {
  struct c l;
  l.d = i_d;
  int n = i_d && l.d;
  i_d = l.d | -(l.d && l.d) - n;

  return 0;
}
