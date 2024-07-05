
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned v;
unsigned ao_u;
short ao_s;
short ac = 1;
unsigned fn10(unsigned p1, short p2) {
  unsigned an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  ao_s = 0xBCD1;
  ao_u = ao_s << 8;
  v = fn2(ao_u - (fn6(1, an) & 1), p2) & 1;
  return v;
}
unsigned fn13() {
  fn10(v, 0);
  return 1;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
