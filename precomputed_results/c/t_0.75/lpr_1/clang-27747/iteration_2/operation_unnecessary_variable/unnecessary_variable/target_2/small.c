#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l;
  l.f = 165;
  l.d = j.e;
  int n = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;
  return 0;
}