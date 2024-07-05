
short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

unsigned char fn10(short p1, short p2) {
  short an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      return 1;
  }
  return 3;
}

int main() {
  printf("checksum = %X\n", fn10(0, 0));
  return 0;
}
