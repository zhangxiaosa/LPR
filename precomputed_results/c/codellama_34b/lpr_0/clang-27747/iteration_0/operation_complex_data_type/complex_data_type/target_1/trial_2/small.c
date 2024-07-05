
#include <iostream>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  struct c i;
  i.d = 0;
  i.e = 6738;
  i.f = 165;
  i.g = 0;
  i.h = 0;
  int n = i.d && 0;
  int o = i.d;
  int p = o | -(i.f && i.d) - n;
  i.g = p;
}
