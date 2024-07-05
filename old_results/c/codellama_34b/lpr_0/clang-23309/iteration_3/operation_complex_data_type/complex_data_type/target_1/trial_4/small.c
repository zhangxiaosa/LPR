
typedef long d;
long fn3(long p1, long p2) { return p1 - p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p;
unsigned v;
short w = 3;
short fn12(int, int, d, short);

int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

short fn12(int p1, int p2, d p3, short p4) {
  int an_hi = p3 >> 16; // high 16 bits of p3
  int an_lo = p3 & 0xFFFF; // low 16 bits of p3
  int ao = 48873;
  int result = fn3(ao, fn6(1L, an_lo));
  if (result & 1L) {
    v = 1L;
  }
  return 0;
}
