
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
short w;
unsigned fn10(p2) {
  unsigned an_high = 250;
  p2 = ac || (an_high = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an_high) & 1) << 8, p2) & 1;
}
int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
