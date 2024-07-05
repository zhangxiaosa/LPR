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
  i.e = 6738;
  i.f = 165;
  i.g = i.e | -(i.f && i.e) - (i.h && i.e);

  return 0;
}