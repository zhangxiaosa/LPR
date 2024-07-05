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
  i.d = i.e;
  int n = i.h && 0;
  i.g = 0 | -(i.f && 0) - n;
}