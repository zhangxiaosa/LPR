
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p;
unsigned v;
short fn12(int p1, int p2, long p3) {
  while (v) {
    if (p2 || v) {
      if (fn3(48873, fn6(1L, v)) - p2 & 1L)
        v = 1L;
    }
    v--;
  }
  return 0;
}
int main() {
  fn12(7L, 7L, 248L);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
