#include <stdio.h>

struct c {
  int d : 18;
  int f;
  int g;
};

int main() {
  struct c i;
  i.g = i.d | -(i.f && i.d);
}
