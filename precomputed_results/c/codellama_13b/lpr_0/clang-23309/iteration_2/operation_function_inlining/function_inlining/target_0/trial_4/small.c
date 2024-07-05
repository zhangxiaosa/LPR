
unsigned fn5(short p1, short p2) {
  return p2;
}

unsigned fn6(unsigned p1, short p2) {
  return p2;
}

unsigned p;

void fn9(unsigned p1, char *p2) {
  p = p1;
}

unsigned v;

short w;

short ab;

short ac = 1L;

unsigned fn13() {
  int an = 250UL;
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1L;
  v = p2 - (ao - (fn6(1L, an) & 1UL) << 8) & 1UL;
  return 1UL;
}

int main() {
  fn13();
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
