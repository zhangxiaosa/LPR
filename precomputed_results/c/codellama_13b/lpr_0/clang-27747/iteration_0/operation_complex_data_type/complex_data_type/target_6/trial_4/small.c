
#include <stdio.h>

typedef struct c {
  int d : 18;
  int e;
  int f;
  int h;
} c;

void fn1() {
  c l = {24, 6738, 165};
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int o = l.d;
  int k = l.f;
  c i = {o | -(k && l.d) - n, l.e, l.f, l.h};
}

int main() {
  fn1();
}
