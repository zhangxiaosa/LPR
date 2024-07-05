#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e;
  int n = l.h && l.d;
  l.g = l.d | -(l.f && l.d) - n;
}
