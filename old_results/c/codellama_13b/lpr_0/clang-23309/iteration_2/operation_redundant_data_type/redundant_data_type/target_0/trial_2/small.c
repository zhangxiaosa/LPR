
int fn5_optimized(int p1, short p2) { return p2; }
int fn5(short p1, short p2) { return p2; }
int fn2_optimized(int p1, short p2) { return p1 - p2; }
int p;
void fn9(int p1, char *p2) { p = p1; }
int v;
short w;
short ab;
short ac = 1;
int fn10(int p1, short p2) {
  int an = 250;
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  v = fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;
  return v;
}
int fn13() {
  fn10(v, v);
  return 1;
}
int main() {
  fn13();
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
