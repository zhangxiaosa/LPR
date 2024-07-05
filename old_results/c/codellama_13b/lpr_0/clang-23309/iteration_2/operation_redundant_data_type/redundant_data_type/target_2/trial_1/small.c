
short fn2_optimized(short p1, short p2) { return p1 - p2; }
short fn5(short p1, short p2) { return p2; }
short fn6_optimized(short p1, short p2) { return p2; }
short p;
void fn9(short p1, char *p2) { p = p1; }
short v;
short w;
short ab;
short ac = 1;
short fn10(short p1, short p2) {
  int an = 250;
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  v = fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;
  return v;
}
short fn13() {
  fn10(v, v);
  return 1;
}
int main() {
  fn13();
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
