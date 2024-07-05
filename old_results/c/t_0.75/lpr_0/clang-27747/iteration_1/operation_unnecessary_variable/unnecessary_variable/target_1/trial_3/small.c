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
  int n = 0;
  signed p = 0 | -(l.f && 0) - n;
  i.g = (int)p;
}