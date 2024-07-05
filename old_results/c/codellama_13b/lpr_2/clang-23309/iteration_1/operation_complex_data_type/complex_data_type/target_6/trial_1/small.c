
#include <stdio.h>

int main() {
  int v = 0;
  int t = 0;
  int w = 0;
  int p1 = 0;
  int p2 = 0;
  int p3 = 0;
  int p4 = 0;
  int p5 = 0;
  int ab = 0;
  int ac = 1;
  int an = 0;
  int ao = 0;

  // Decompose fn3
  int fn3(int p1, int p2) {
    int result = p1 - p2;
    return result;
  }

  // Decompose fn10
  int fn10(int p1, int p2) {
    int af = 0x2F2F6D26L;
    int ag = 248UL;
    fn12(2L, ag, p2, 1, p1);
    return af;
  }

  // Decompose fn12
  int fn12(int p1, int p2, int p3, int p4, int p5) {
    int al = 3L;
    int am = 1L;
    int an;
    for (w = 3; w; w -= 1)
      if (an = 250UL) {
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
        int ao = 0xBCD1L;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
          v = 1UL;
      }
    return al;
  }

  // Decompose fn2
  int fn2(int p1, int p2) {
    int result = p1 - p2;
    return result;
  }

  // Decompose fn4
  int fn4(int p1) {
    int result = p1;
    return result;
  }

  // Decompose fn5
  int fn5(int p1, int p2) {
    int result = p2;
    return result;
  }

  // Decompose fn6
  int fn6(int p1, int p2) {
    int result = p1 - p2;
    return result;
  }

  // Call fn13
  fn13();

  // Print the checksum
  printf("checksum = %X\n", v);

  return 0;
}
