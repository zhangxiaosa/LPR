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
  int n;
  signed p;

  l.d = j.e;
  n = j.h && l.d;
  p = l.d | -(l.f && l.d) - n;
  i.g = p;
}
