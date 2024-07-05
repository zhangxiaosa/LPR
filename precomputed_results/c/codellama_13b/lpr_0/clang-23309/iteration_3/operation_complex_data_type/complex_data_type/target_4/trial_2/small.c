
int fn2(int p1, short p2) { return p1 - p2; }
short fn6(int p1, short p2) { return p2; }
int v;
short w;
short ac = 1;
int fn10(int p1, short p2) {
  int an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  v = fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
  return v;
}
int fn13() {
  fn10(v, 0);
  return 1;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
