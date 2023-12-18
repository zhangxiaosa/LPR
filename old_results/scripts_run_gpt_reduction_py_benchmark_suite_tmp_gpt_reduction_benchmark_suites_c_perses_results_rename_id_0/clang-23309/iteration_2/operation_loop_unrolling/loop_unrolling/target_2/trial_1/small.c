/* Optimized program with loop unrolling */

unsigned p;
long v;
short w;
short ac = 1L;
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
int fn13() {
  int an;
  
 // Loop unrolled code 1
  if (an = 250UL) {
    unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  // Loop unrolled code 2
  if (an = 250UL) {
    unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  // Loop unrolled code 3
  if (an = 250UL) {
    unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    if ((ao - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  return 0x2F2F6D26L;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}