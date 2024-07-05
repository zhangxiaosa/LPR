
#include <stdint.h>

uint32_t h = 6L;

struct c {
  uint32_t d;
  uint32_t e;
};

struct c f;

char fn1() {
  if (f.e)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
