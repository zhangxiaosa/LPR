unsigned p;
long v;
int w;
short ac = 1L;

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int main() {
  int an;
  short ao;

  if (an = 250UL) {
    ac || (an = 3);
    ao = 0xBCD1L;
    if ((ao - (fn6(1L, an) - 0xECl)) - ac & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    ac || (an = 2);
    ao = 0xBCD1L;
    if ((ao - (fn6(1L, an) - 0xECl)) - ac & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    ac || (an = 1);
    ao = 0xBCD1L;
    if ((ao - (fn6(1L, an) - 0xECl)) - ac & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}