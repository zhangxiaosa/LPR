#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;

int main() {
  i.g = (i.d | -(i.f && i.d)) - (i.h && i.d);
}
