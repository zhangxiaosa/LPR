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
  j.e = i.e;
  i.g = j.e | -(j.f && j.e) - (j.h && j.e);
}
