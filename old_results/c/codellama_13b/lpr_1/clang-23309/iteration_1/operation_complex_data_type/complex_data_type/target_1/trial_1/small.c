
typedef int int32_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned int32_t;
typedef unsigned long long uint64_t;

void fn1(int16_t p1, int32_t p2) { printf("checksum = %X\n", p1); }

int32_t fn2(int32_t p1, int32_t p2) { return p1 - p2; }

int64_t fn3(int64_t p1, int64_t p2) { return p1 - p2; }

int16_t fn4(int16_t p1, int16_t p2) { return p1; }

int16_t fn5(int16_t p1, int16_t p2) { return p2; }

int16_t fn6(int16_t p1, int16_t p2) { return p1 - p2; }

uint64_t p;

void fn9(uint32_t p1, char *p2, int32_t p3) { p = p1; }

int32_t t;
int16_t u;
uint32_t v;
int16_t w;
int16_t ab;
int16_t ac = 1;

int64_t fn10(uint64_t, int16_t);
int64_t fn11(int64_t, int16_t, int32_t, int16_t);
int16_t fn12(int32_t, int32_t, int64_t, int16_t, uint64_t);

int32_t fn13() {
  int16_t ae = 1;
  fn10(v, t);
  return ae;
}

int64_t fn10(uint64_t p1, int16_t p2) {
  int64_t af = 0x2F2F6D26L;
  int16_t ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

int64_t fn11(int64_t p1, int16_t p2, int32_t p3, int16_t p4) {
  int32_t ai = 7;
  int16_t aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

int16_t fn12(int32_t p1, int32_t p2, int64_t p3, int16_t p4, uint64_t p5) {
  int32_t al = 3;
  int32_t an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int16_t ao = 0xBCD1;
      if (fn2(fn3(ao, fn4(fn6(1, an), 0xECL)), p2) & 1)
        v = 1;
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
