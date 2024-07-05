
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
short w;
short ac = 1;
unsigned fn10(unsigned p2) {
  unsigned an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}
int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
