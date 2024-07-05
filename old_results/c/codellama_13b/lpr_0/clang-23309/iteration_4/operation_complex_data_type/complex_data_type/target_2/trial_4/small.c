
unsigned fn2(short p1, short p2) { return p1 - p2; }
unsigned fn6(short p1, short p2) { return p1 & p2; }
unsigned short w;
unsigned short an_high;
unsigned an_low;
unsigned fn10(short p2) {
  an_high = w;
  an_low = 0;
  p2 = an_high == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an_high) & 1) << 8, p2) & 1;
}
int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
