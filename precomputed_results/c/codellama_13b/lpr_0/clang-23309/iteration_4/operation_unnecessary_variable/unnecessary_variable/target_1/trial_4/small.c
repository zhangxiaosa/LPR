
unsigned fn2(unsigned p1, short p2) { return p1; }
unsigned fn6(unsigned p1, short p2) { return p2; }
short w;
unsigned ac = 1;
unsigned fn10(p2) {
  unsigned an_high = 250;
  p2 = ac || (an_high = w) == 0x294A85636008822D;
  return fn2(0, (short)0xBCD1);
}
int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
