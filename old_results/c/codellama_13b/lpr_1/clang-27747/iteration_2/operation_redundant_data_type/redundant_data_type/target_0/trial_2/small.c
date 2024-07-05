
#include <stdint.h>

struct c {
  int h : 18;
  int g;
} i, j;
int main() {
  struct c l;
  l.h = j.h;
  uint32_t n = j.h && l.h;
  uint32_t p = l.h | -(165 && l.h) - n;
  i.g = p;
}
