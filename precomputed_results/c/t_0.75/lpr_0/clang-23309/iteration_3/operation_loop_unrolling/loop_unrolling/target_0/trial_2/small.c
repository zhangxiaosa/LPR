short v;
short w;

short fn4(short p1, short p2) { return p1; }

short fn11(short p1, short p2, int p3) {
  int an;

  // Unrolled Loop
  w = 3;
  if (an = 250) {
    p3 = p2 || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - p3 & 1)
      v = 1;
  }

  w = 2;
  if (an = 250) {
    p3 = p2 || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - p3 & 1)
      v = 1;
  }

  w = 1;
  if (an = 250) {
    p3 = p2 || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - p3 & 1)
      v = 1;
  }

  return 1;
}

int main() {
  short ag = 248;
  fn11(2, ag, 0);
  printf("checksum = %X\n", v);
  return 0;
}