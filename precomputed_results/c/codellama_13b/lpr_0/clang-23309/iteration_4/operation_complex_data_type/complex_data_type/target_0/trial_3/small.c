
short ac;

unsigned fn2(unsigned p1, short p2) {
  return p1 - p2;
}

unsigned fn6(unsigned p1, short p2) {
  return p2;
}

short w;

unsigned fn10(short p2) {
  unsigned an = 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}

int main() {
  return 0;
}
