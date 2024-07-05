unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;
long v;
short w;
short ac = 1L;

int main() {
  unsigned p2;
  short ao = 0xBCD1L;

  if ((ao - (1L - 0xECL)) - ac & 1UL)
    v = 1UL;

  p = v;
  printf("checksum = %X\n", p);

  return 0;
}