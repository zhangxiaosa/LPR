#include <stdint.h>

uint32_t m0[4];
struct i {
  int32_t j;
  int32_t l;
};
struct i n[2];

int main() {}

int fn1(uint8_t p1) { return p1 ? p1 : 0; }

int fn3() {
  uint32_t s;
  struct i v = {0x15L};
  int32_t w;
  int32_t a;

  // Unrolled loop
  n[0] = v;
  v.l = m0[0];
  w = fn1(n[0].l);
  for (a = 0; a; a -= 4) {
    n[0] = v;
  }

  n[0] = v;
  v.l = m0[1];
  w = fn1(n[0].l);
  for (a = 0; a; a -= 4) {
    n[0] = v;
  }

  n[0] = v;
  v.l = m0[2];
  w = fn1(n[0].l);
  for (a = 0; a; a -= 4) {
    n[0] = v;
  }

  return 0;
}