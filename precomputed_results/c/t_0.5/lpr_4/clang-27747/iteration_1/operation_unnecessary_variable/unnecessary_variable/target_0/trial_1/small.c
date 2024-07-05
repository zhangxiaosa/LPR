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
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && j.e;
  i.g = j.e | -(l.f && j.e) - n;

  // Print the optimized value of l.d
  printf("Optimized l.d: %d\n", j.e);

  return 0;
}