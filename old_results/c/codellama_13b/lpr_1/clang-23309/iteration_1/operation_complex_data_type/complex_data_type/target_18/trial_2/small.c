
#include <stdio.h>

typedef int int32_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned int uint32_t;

void fn1(int16_t p1, int32_t p2) { printf("checksum = %X\n", p1); }

int32_t fn2(int32_t p1, int32_t p2) { return p1 - p2; }

int64_t fn3(int64_t p1, int64_t p2) { return p1 - p2; }

uint8_t fn4(uint8_t p1, uint8_t p2) { return p1; }

int16_t fn5(int16_t p1, int16_t p2) { return p2; }

int16_t fn6(int16_t p1, int16_t p2) { return p1 - p2; }

int32_t p;

void fn9(uint64_t p1, char *p2, int32_t p3) { p = p1; }

int32_t t;
uint32_t u;
uint32_t v;
int16_t w;
int16_t ab;
uint64_t ac = 1LL;

int16_t fn10(uint64_t, int16_t);
int16_t fn11(int64_t, int16_t, int8_t, int16_t);
int16_t fn12(int8_t, int8_t, int64_t, int16_t, uint64_t);

int32_t fn13() {
  int16_t ae = 1ULL;
  fn10(u, t);
  return ae;
}

int16_t fn10(uint64_t p1, int16_t p2) {
  int16_t d = 0x2F2F6D26LL;
  int16_t ag = 248ULL;
  fn11(2LL, ag, p2, 1);
  return d;
}

int16_t fn11(int64_t p1, int16_t p2, int8_t p3, int16_t p4) {
  int8_t ai = 7LL;
  int16_t aj = 1ULL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

int16_t fn12(int8_t p1, int8_t p2, int64_t p3, int16_t p4, uint64_t p5) {
  int8_t al = 3LL;
  int8_t an;
  for (w = 3; w; w -= 1)
    if (an = 250ULL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int16_t ao = 0xBCD1LL;
      if (fn2(fn3(ao, fn4(fn6(1ULL, an), 0xECL)), p2) & 1ULL)
        v = 1ULL;
    }
  return al;
}

int main() {
  int32_t ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
