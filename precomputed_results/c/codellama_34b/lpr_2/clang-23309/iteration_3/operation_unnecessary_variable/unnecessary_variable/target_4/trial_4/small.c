
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
short w;
unsigned ac = 1;
int fn13() {
  short an;
  for (w = 3; w; w -= 1) {
    an = 0x294A;
    if (fn2(an, 0x294A85636008822D) & 1)
      v_int = 1;
  }
  return 0;
}
int main() {
  fn13();
  printf("checksum = %d\n", v_int);
  return 0;
}
