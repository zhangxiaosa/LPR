
typedef unsigned long d;

long fn3(long p1, long p2) { return p1 - p2; }
unsigned long fn6(unsigned long p1, unsigned long p2) { return p2 - p1; }
unsigned long p;
unsigned long v;
short w = 3;
short fn12(int, int, unsigned long, short);

int main() {
  fn12(7L, 7L, 248UL, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

short fn12(int p1, int p2, unsigned long p3, short p4) {
  int an;
  while (w) {
    an = 250UL;
    if (p2 || (an = w)) {
      short ao = 48873;
      if (fn3(ao, fn6(1L, an)) - p2 & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}
