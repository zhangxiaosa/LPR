
unsigned fn6(unsigned p1, unsigned p2) {
  unsigned an = p2;
  unsigned ao = 48873;
  return ao - an;
}

int main() {
  unsigned p1 = 7L;
  unsigned p2 = 7L;
  unsigned p3 = 248L;
  short w = 3;
  unsigned v = fn6(p1, p2);
  printf("checksum = %X\n", v);
  return 0;
}
