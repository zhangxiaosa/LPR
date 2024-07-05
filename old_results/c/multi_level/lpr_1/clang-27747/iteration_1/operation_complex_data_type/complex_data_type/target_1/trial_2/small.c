#include <stdint.h>

struct c {
  int32_t d;
  uint32_t e;
  uint32_t f;
  int32_t g;
  int32_t h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int32_t n = j.h && l.d;
  int32_t o = l.d;
  int32_t temp = l.f && l.d;
  int32_t p = o | -temp - n;
  i.g = p;
}