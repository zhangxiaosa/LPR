#include <stdio.h>

struct c {
  unsigned int d;
  unsigned int e;
  unsigned long f;
  unsigned long g;
  unsigned long h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = i.e;
  unsigned int n = i.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;
}