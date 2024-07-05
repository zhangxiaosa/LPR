
typedef long d;

long fn3(long p1, long p2) { return p1 - p2; }

long fn6(long p1, long p2) { return p2 - p1; }

long p;
long v;
long w = 3;
long fn12(long p1, long p2, d p3, short p4) {
  long an;
  while (w) {
    an = 250UL;
    if (p2 || (an = w)) {
      long ao = 48873;
      if (fn3(ao, fn6(1L, an)) - p2 & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}

long fn13() {
  fn12(7L, 7L, 248UL, 0);
  return 2L;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
