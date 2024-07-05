
#include <stdio.h>

typedef unsigned short uint16_t;
typedef unsigned long uint32_t;
typedef unsigned long long uint64_t;

void fn1(uint16_t p1, uint16_t p2) { printf("checksum = %X\n", p1); }

uint16_t fn2(uint16_t p1, uint16_t p2) { return p1 - p2; }

uint16_t fn3(uint16_t p1, uint16_t p2) { return p1 - p2; }

uint8_t fn4(uint8_t p1, uint8_t p2) { return p1; }

uint16_t fn6(uint16_t p1, uint16_t p2) { return p1 - p2; }

uint16_t p;

void fn9(uint8_t p1, char *p2, uint16_t p3) { p = p1; }

uint8_t v;

uint16_t w;

uint16_t ab;

uint64_t ac = 3UL;

uint16_t fn12(uint64_t p1, uint64_t p2, uint64_t p3, uint16_t p4, uint8_t p5) {
  uint16_t an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = fn6(ab, ac) || (an = w) == 0x294A85636008822DLL;
      uint16_t ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  }
  return 3L;
}

uint16_t fn13() {
  uint16_t ae = 1UL;
  fn12(ae, ae, 2L, 0, 2L);
  return ae;
}

int main() {
  uint16_t ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
