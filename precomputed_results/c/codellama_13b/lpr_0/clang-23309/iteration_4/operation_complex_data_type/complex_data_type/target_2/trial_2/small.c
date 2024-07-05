
unsigned short w;
unsigned short ac = 1;
unsigned an_high = 250;
unsigned an_low = 0;
unsigned fn10(p2) {
  p2 = ac || (an_high = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an_high) & 1) << 8, p2) & 1;
}
int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
