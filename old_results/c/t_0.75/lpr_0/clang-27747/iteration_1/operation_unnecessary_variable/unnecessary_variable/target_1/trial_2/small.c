#include <limits.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = 0; // Assuming j.e is not a constant
  int n = 0 && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = (int)p;
}