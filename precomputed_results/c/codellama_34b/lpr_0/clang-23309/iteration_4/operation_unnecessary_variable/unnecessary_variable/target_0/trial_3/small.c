
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p;
unsigned v;
short fn12(int p1, int p2, long p3, signed p4) {
  int an = 3;
  while (an) {
    if (p2 || (an = 3)) {
      if (fn3(48873, fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    an--;
  }
  return 0;
}
int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
