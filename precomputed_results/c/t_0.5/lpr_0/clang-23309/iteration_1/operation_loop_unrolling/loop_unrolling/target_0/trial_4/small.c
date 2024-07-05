char fn4(char p1, char p2) {
  return p1;
}

unsigned p;
int t;
long v;
short w;
short ac = 1L;

int main() {
  int an;

  // Unrolled Iteration 1: w = 3
  if (an = 250UL) {
    t = ac || (an = 3) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - t & 1)
      v = 1UL;
  }

  // Unrolled Iteration 2: w = 2
  if (an = 250UL) {
    t = ac || (an = 2) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - t & 1)
      v = 1UL;
  }

  // Unrolled Iteration 3: w = 1
  if (an = 250UL) {
    t = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - t & 1)
      v = 1UL;
  }

  p = v;
  printf("checksum = %d\n", p);
  return 0;
}