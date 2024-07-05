
unsigned fn6(unsigned short p1, unsigned short p2) {
  return (p2 - p1) & 1L;
}

short fn12(int p1, int p2, long p3, short p4) {
  int an;
  unsigned short ao;
  for (int w = 3; w >= 0; w--) {
    an = 250L;
    if (p2 || (an = w)) {
      ao = 48873;
      if (fn3(ao, (p2 - p1) & 1L) - p2 & 1L)
        v = 1L;
    }
  }
  return 0;
}

int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
