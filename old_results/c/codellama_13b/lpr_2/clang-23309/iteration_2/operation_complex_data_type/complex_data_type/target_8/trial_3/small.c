
int main() {
  unsigned int v, t, w, ab;
  short ac = 1;
  unsigned char an;
  int p;

  fn13(v, t);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

unsigned int fn13(unsigned int v, unsigned int t) {
  unsigned int w;
  unsigned char ac = 1;
  unsigned char an;

  for (w = 3; w; w -= 1) {
    an = w;
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), t) & 1)
      v = 1;
  }
  return 3;
}
