
#include <stdio.h>

int fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

float fn4(float p1, float p2) { return p1; }

float fn5(float p1, float p2) { return p2; }

float fn6(float p1, float p2) { return p1 - p2; }

float p;

void fn9(int p1, char *p2, int p3) { p = p1; }

int t;
float u;
unsigned v;
short w;
float ab;
unsigned long ac = 1L;

short fn10(int, float);
short fn11(long, float, int, float);
short fn12(int, int, long, short, int);

int fn13() {
  float ae = 1UL;
  fn10(u, t);
  return ae;
}

short fn10(int p1, float p2) {
  short d = 0x2F2F6D26L;
  float ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

short fn11(long p1, float p2, int p3, float p4) {
  unsigned ai = 7L;
  float aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(int p1, int p2, long p3, short p4, int p5) {
  int al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      float ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
