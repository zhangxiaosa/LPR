
fn2(int p1, int p2) { return p1 - p2; }
fn3(int p1, int p2) { return p1 - p2; }
int v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(int, int);
int fn13() {
  fn10(0, 0);
  return 1;
}
unsigned char fn10(int p1, int p2) {
  int al = 3;
  int an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  return al;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
