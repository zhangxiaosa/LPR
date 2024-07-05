
unsigned fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p = 3;
short fn12(int p1, int p2, long p3, signed p4) {
  int an = 250L;
  short ao = 1L;
  if (p2 || an) {
    if (fn3(ao, fn6(1L, an)) - p2 & 1L)
      return 1L;
  }
  return 0;
}
int main() {
  fn12(7L, 7L, 248L, 0);
  printf("checksum = %X\n", 1L);
  return 0;
}
