#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = i.e;
  i.g = l.d | -(l.f && l.d);

  return 0;
}