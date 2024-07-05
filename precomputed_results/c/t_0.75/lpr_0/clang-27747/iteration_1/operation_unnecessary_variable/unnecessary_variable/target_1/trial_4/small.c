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
  l.d = 0;
  int n = l.d;
  signed p = l.d | -(l.f && l.d) - l.d;
  i.g = (int)p;
}