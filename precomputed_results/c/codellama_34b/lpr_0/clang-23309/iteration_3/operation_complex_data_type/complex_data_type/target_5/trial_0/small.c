
long fn3(long p1, long p2) {
  long result;
  result = p1 - p2;
  return result;
}

unsigned fn6(unsigned p1, unsigned p2) {
  unsigned result;
  result = p2 - p1;
  return result;
}

unsigned p;
unsigned v;
short w;

int fn12(int p1, int p2, long p3, short p4) {
  int an;
  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      short ao = 48873;
      if (fn3(ao, fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    w--;
  }
  return 0;
}

int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
