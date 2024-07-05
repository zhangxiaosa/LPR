long fn3(long p1, long p2) { return p1 - p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

long v;
short w;
short ac = 1L;
int main() {
  long am = 1L;
  int an;

  // First Unrolled Iteration
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(am - an, 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  // Second Unrolled Iteration
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(am - an, 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  // Third Unrolled Iteration
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(am - an, 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  printf("checksum = %lX\n", v);
  return 0;
}