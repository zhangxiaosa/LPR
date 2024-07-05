
#include <stdio.h>

struct c {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c l;
  l.h = j.h;
  int n = j.h && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.g = p;

  // Optimization: loop unrolling
  for (int i = 0; i < 10; i++) {
    l.h = j.h;
    n = j.h && l.h;
    p = l.h | -(165 && l.h) - n;
    i.g = p;
  }

  return 0;
}
