c
#include <stdio.h>

typedef struct {
  int d : 18;
  unsigned e;
  int g;
  int h;
} c;

int main() {
  c l, j;
  l.d = j.e;
  int n = j.h && l.d;
  int p = l.d | -(165 && l.d) - n;
  l.g = p;
}
