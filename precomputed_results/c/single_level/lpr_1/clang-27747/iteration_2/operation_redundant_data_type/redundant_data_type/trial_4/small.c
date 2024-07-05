#include <stdint.h>

struct c {
  int32_t d : 18;
  uint32_t e;
  uint32_t f;
  int32_t g;
  int32_t h;
};

int32_t i;
int32_t j;

int main() {
  struct c l = {24, 6738, 165};
  int32_t m = j.e;
  l.d = m;
  int32_t n = j.h && l.d;
  int32_t p = l.d | -(l.f && l.d) - n;
  i.g = p;
}