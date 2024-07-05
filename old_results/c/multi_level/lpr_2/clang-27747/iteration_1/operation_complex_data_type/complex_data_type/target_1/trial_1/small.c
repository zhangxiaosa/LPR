#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c j;

int main() {
  struct c l = {24, 6738, 165};
  j.d = l.e;
  j.g = l.d | -(l.f && l.d) - (j.h && l.d);
}
