
#include <cstdio>

typedef int int_t;

struct c {
  int_t d : 18;
  int_t e;
  int_t g;
  int_t h;
};

struct c i;

int main() {
  struct c l;
  int_t m = i.e;
  l.d = m;
  int_t n = i.h && l.d;
  int_t p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
