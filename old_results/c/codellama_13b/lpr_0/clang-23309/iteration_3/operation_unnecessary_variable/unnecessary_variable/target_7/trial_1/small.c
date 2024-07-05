
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned fn13() {
  unsigned an = 250;
  short p2 = ac || (an = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}
int main() {
  printf("checksum = %X\n", fn13());
  return 0;
}
