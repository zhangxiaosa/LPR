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
  j.d = j.e;
  int n = j.h && j.d;
  j.g = j.d | -(j.f && j.d) - n;
}