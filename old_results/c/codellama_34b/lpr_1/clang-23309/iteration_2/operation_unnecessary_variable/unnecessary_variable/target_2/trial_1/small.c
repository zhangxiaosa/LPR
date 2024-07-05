
short fn2(short p2) { return p2; }
short fn3(short p2) { return p2; }
unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short);
short fn13() {
  fn10(0);
  return 1;
}
unsigned char fn10(short p2) {
  short an = 0;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  return 3;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
