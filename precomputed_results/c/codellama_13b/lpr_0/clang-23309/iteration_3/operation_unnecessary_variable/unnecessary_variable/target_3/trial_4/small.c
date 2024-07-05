
unsigned fn2(unsigned p1, short p2) {
  return 0xBCD1 - (p2 & 1) << 8;
}
unsigned fn6(unsigned p1, short p2) {
  return p2;
}
unsigned v;
short w;
short ac = 1;
unsigned fn10(unsigned p1, short p2) {
  unsigned an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  v = fn2(0xBCD1 - (p2 & 1) << 8, p2) & 1;
  return v;
}
unsigned fn13() {
  fn10(0, 0);
  return 1;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
