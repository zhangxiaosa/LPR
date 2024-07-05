long fn3(long p1, long p2) { return p1 - p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

unsigned p;
long v;
short w;
short ac = 1L;
int main() {
  long am = 1L;
  int an;

  // Unrolled loop 1
  w = 3;
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(am - an, 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  // Unrolled loop 2
  w = 2;
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(am - an, 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  // Unrolled loop 3
  w = 1;
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(am - an, 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}