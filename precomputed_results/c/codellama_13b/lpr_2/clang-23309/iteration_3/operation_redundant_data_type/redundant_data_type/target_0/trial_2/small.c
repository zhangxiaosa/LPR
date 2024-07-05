
int fn2(int p1, int p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
int v;
int w;
int ac = 1;
int fn12(int, int, int, int, int);
int fn13() {
  fn12(2, 248, v, 1, 0x2F2F6D26);
  return 0;
}
int fn12(int p1, int p2, int p3, int p4, int p5) {
  for (w = 3; w; w -= 1) {
    int an = 250;
    p2 = fn5(p2, ac) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, fn4(fn6(1, an), 0xECL)), p2) & 1)
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
