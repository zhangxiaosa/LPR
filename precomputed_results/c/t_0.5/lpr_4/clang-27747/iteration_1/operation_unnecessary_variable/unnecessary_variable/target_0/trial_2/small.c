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
  j.e = l.d; // Propagate the value of l.d to j.e
  int n = j.h && j.e; // Use the propagated value of l.d
  i.g = j.e | -(l.f && j.e) - n; // Use the propagated value of l.d
}
