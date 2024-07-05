
short fn3(short p1, short p2) {
  return p1 - p2;
}

short fn13() {
  return fn12(2, 248, 3, 0x2F2F6D26);
}

short fn12(short p1, short p2, short p3, short p4) {
  for (short w = 3; w; w -= 1) {
    short an = 250;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, fn4(fn6(1, an), 0xE)), p2) & 1)
      return 1;
  }
  return 3;
}

int main() {
  short value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
