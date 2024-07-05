
int p;
int t;
int v;
int w;
int ab;
int ac = 1;
int fn10(int, int);
int fn12(int, int, int, int, int);
int fn13() {
  fn10(v, t);
  return 0;
}
int fn10(int p1, int p2) {
  fn12(2, 248, p2, 1, p1);
  return 0x2F2F6D26;
}
int fn12(int p1, int p2, int p3, int p4, int p5) {
  for (w = 3; w; w -= 1) {
    int an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, fn4(fn6(1, an), 0xEC)), p2) & 1)
      v = 1;
  }
  return 3;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
