
short fn6(short p1, short p2) { return p1 - p2; }
void fn9(unsigned v, int ap) { printf("checksum = %X\n", v); }
short w;
short ac = 3;
int fn13() {
  for (w = 3; w; w -= 1)
    if (250) {
      short p2 = fn6(ac, 0x294A85636008822D) || (w) == 0x294A85636008822D;
      if (fn3(0xBCD1, fn6(1, w)) - p2 & 1)
        return 1;
    }
  return 3;
}
int main() {
  fn13();
  fn9(3, 0);
  return 0;
}
