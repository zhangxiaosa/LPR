
unsigned fn1(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(unsigned p1, short p2) { return p2; }
unsigned v;
short w;
short ac = 1;
unsigned fn10(short p1) {
  p1 = ac || (w) == 0x294A85636008822D;
  v = fn2((short)0xBCD1 - (fn5(1, p1) & 1) << 8, p1) & 1;
  return v;
}
unsigned fn13() {
  fn10(0);
  return 1;
}
int main() {
  fn12();
  printf("checksum = %X\n", v);
  return 0;
}
