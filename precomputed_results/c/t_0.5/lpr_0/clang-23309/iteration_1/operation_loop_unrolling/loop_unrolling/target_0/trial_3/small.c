char fn4(char p1, char p2) { return p1; }

unsigned p;
int t;
long v;
short w;
short ac = 1L;

int main() {
  int an;
  v = 0UL;

  // Loop unrolling
  if (an = 250UL) {
    t = ac || (an = 3) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - t & 1)
      v = 1UL;
  }
  if (an = 250UL) {
    t = ac || (an = 2) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - t & 1)
      v = 1UL;
  }
  if (an = 250UL) {
    t = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - t & 1)
      v = 1UL;
  }

  w = 0;
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}