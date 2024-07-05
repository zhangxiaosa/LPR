#include <stdio.h>

f p;

f fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

void fn7(f p1) { p = p1; }

void fn8(f p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

c fn13() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;

  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an == 250UL) {
      u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - fn4(fn6(am, an), 0xECL)) & 1UL)
        v = 1UL;
    }
  return af;
}

int main() {
  b af = 0x2F2F6D26L;

  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an == 250UL) {
      u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - fn4(fn6(am, an), 0xECL)) & 1UL)
        v = 1UL;
    }
  g p1 = v;
  char *p2 = "g_170";
  int p3 = 0;
  f p1_copy = p1;
  p = p1_copy; // Inlined fn9 call
  printf("checksum = %X\n", p);
  return 0;
}