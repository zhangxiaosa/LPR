
short fn2(short p1, short p2) {
  return p1 - p2;
}

short fn6(short p1, short p2) {
  return p2;
}

short w;
short ac = 1;
short fn10(short p2) {
  short an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}

int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
