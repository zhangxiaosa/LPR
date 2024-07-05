
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned fn10(short p2) {
  unsigned an = 250;
  p2 = 1 || (an = 0x294A85636008822D) == 0x294A85636008822D;
  return fn2((short)0xBCD1, p2) & 1;
}
unsigned fn13() {
  fn10(0);
  return 1;
}
int main() {
  fn13();
  printf("checksum = %X\n", fn10(0));
  return 0;
}
